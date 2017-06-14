// Fill out your copyright notice in the Description page of Project Settings.

#include "Bellz.h"
#include "Gladiator.h"
#include "GameDataTables.h"
#include "PaperSpriteComponent.h"



// Sets default values and is automatically run for any blueprints in the editor
AGladiator::AGladiator()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Get basic collision capsule and set its size
	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	TotalHealth = 100.0f;
	AttackRange = 25.0f;

	jumppingVelocity = 600.0f;

	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;

	//Dont rotate the player when camera rotates just move the camera
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//Get the CharacterMovementComponenet and set various aspects. 
	GetCharacterMovement()->bOrientRotationToMovement = true; //Will make the character move in the direction of movement
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = jumppingVelocity;
	GetCharacterMovement()->AirControl = 0.2f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform, NAME_None); //attach the boom to the player
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true; //rotate the camera around the player

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->AttachToComponent(CameraBoom, FAttachmentTransformRules::KeepRelativeTransform, USpringArmComponent::SocketName); //Put the camera on the boom in the socket?
	FollowCamera->bUsePawnControlRotation = false;

	EffectSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("ClawEffect"));
	EffectSprite->AttachToComponent(CameraBoom, FAttachmentTransformRules::KeepRelativeTransform, NAME_None);

	IsStillAlive = true;
	IsAttacking = false;
	WeaponIndex = 1;

	OnSetPlayerController(true);

}

// Called when the game starts or when spawned
void AGladiator::BeginPlay()
{
	Super::BeginPlay();
	
	
	for(TActorIterator<AGameDataTables> ActorItr(GetWorld()); ActorItr; ++ActorItr) // looks for objects of AGameDataTables type in the level
	{
		if(ActorItr)
		{
			TablesInstance = *ActorItr;
			TablesInstance->OnFetchAllTables();
		}
	}
	
}

// Called every frame
void AGladiator::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AGladiator::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	check(InputComponent);

	InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	InputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	InputComponent->BindAction("Attack", IE_Pressed, this, &AGladiator::OnAttack);
	InputComponent->BindAction("ChangeWeapon", IE_Pressed, this, &AGladiator::OnChangeWeapon);

	InputComponent->BindAxis("MoveForward", this, &AGladiator::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AGladiator::MoveRight);

	//turn for devices that provide absolute delta like a mouse
	//turn rate for devices that measure a rate of change, like a joystick
	InputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	InputComponent->BindAxis("TurnRate", this, &AGladiator::TurnAtRate);
	InputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	InputComponent->BindAxis("LookUpRate", this, &AGladiator::LookUpAtRate);

}

void AGladiator::Jump()
{
	if (IsControlable && !IsAttacking)
	{
		bPressedJump = true;
		JumpKeyHoldTime = 0.0f;
	}
}

void AGladiator::StopJumping()
{
	if (IsControlable)
	{
		bPressedJump = false;
		JumpKeyHoldTime = 0.0f;
	}
}

void AGladiator::OnAttack()
{
	if (IsControlable)
	{
		IsAttacking = true;
	}
}

void AGladiator::OnPostAttack()
{
	IsAttacking = false;
}

void AGladiator::OnChangeWeapon()
{
	if (IsControlable)
	{
		if(WeaponIndex < TablesInstance->AllWeaponsData.Num())
		{
			WeaponIndex++;
		}
		else
		{
			WeaponIndex = 1;
		}
	}
}

void AGladiator::TurnAtRate(float Rate)
{
	if (IsControlable)
	{
		AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds()); //applys yaw rotation to the controller controllerInput * sensitivity * amount of time passed
	}
}

void AGladiator::LookUpAtRate(float Rate)
{
	if (IsControlable)
	{
		AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
	}
}

void AGladiator::OnSetPlayerController(bool status)
{
	IsControlable = status;
}

void AGladiator::OnChangeHealthByAmount(float usedAmount)
{
	TotalHealth -= usedAmount;
	FOutputDeviceNull ar;
	//calls a blueprint function somewhere that will enable the sprite on the screen and fade it out while shaking it to simulate damage being doing to the player
	this->CallFunctionByNameWithArguments(TEXT("ApplyGetDamageEffect"), ar, NULL, true);
}

void AGladiator::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f) && IsControlable & !IsAttacking)
	{
		//Determine what direction if forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		//Apply rotation to x axis
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AGladiator::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f) && IsControlable & !IsAttacking)
	{
		//Determine what direction if forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		//Apply rotation to x axis
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}


