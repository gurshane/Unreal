// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSTest.h"
#include "FPSCharacter.h"


// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FPSCameraComponent->SetupAttachment(GetCapsuleComponent());

	FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));
	FPSCameraComponent->bUsePawnControlRotation = true; //allows changes to the pawns camera to be applied to this camera

	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	FPSMesh->SetOnlyOwnerSee(true); // Only visible to the player controlling this pawn
	FPSMesh->SetupAttachment(FPSCameraComponent);

	//we will use a seperate mesh for the FPS and TPS perspectives so the arms should not cast any shadows
	FPSMesh->bCastDynamicShadow = false;
	FPSMesh->CastShadow = false;

	//The default human male mesh currently being used will not be seen by the player controlling this pawn
	GetMesh()->SetOwnerNoSee(true);
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		//The -1 means we will never need to refresh or update this message
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using FPSCharacter"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("GEngine missing"));
	}
	
}

// Called every frame
void AFPSCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	//binds axis inputs to specific functions
	InputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	//bind mouse movement to prewritten yaw and pitch functions
	InputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);
	InputComponent->BindAxis("Look", this, &AFPSCharacter::AddControllerPitchInput);

	//bind jump key
	InputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::StartJump);
	InputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::StopJump);

	//bind fire key
	InputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);
}

void AFPSCharacter::MoveForward(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AFPSCharacter::MoveRight(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AFPSCharacter::StartJump()
{
	bPressedJump = true;
}

void AFPSCharacter::StopJump()
{
	bPressedJump = false;
}

void AFPSCharacter::Fire()
{
	if (ProjectileClass)
	{
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation); //gets current actor's camera position and rotation and puts it into the inputted variables

		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset); //I guess this rotates the muzzle offset into a vector that is rotated to face in the direction of the camera
		FRotator MuzzleRotation = CameraRotation;

		MuzzleRotation.Pitch += 10.0f; //spawn slightly above the desired target

		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;

			AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile> (ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile)
			{
				FVector LaunchDirection = MuzzleRotation.Vector(); 
				Projectile->FireInDirection(LaunchDirection); //ask the projectile to move in the direction we are facing
			}
		}
	}
}


