// Fill out your copyright notice in the Description page of Project Settings.

#include "Bellz.h"
#include "Enemy.h"
#include "EnemyAIController.h"
#include "Gladiator.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AIControllerClass = AEnemyAIController::StaticClass();

	TotalHealth = 100;
	AttackRange = 100;
	AttackDamage = 10;
	IsDead = false;
	IsAttacking = false;

	bUseControllerRotationYaw = true;

	//setup pawn sensor
	PawnSensor = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("Pawn Sensor"));
	PawnSensor->SensingInterval = .25f;
	PawnSensor->bOnlySensePlayers = true; //wont sense other ai players
	PawnSensor->SetPeripheralVisionAngle(85.0f);

	//setup body trigger
	bodySphereTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("BodyTriggerSphere"));
	bodySphereTrigger->SetSphereRadius(150.0f);
	bodySphereTrigger->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, NAME_None);

	//color of hand trigger
	FColor handsTriggersColor = FColor(0, 0, 255, 255);

	//setup and attach left hand trigger
	leftHandTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("LeftHandTrigger"));
	leftHandTrigger->SetSphereRadius(70.0f);
	leftHandTrigger->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, "hand_lf");
	leftHandTrigger->ShapeColor = handsTriggersColor;
	leftHandTrigger->bGenerateOverlapEvents = 0;

	//setup and attach right hand trigger
	rightHandTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("RightHandTrigger"));
	rightHandTrigger->SetSphereRadius(70.0f);
	rightHandTrigger->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, "hand_rt");
	rightHandTrigger->ShapeColor = handsTriggersColor;
	rightHandTrigger->bGenerateOverlapEvents = 0;

	//nav agent properties
	GetCharacterMovement()->NavAgentProps.AgentRadius = 400.0f;
	GetCharacterMovement()->SetUpdateNavAgentWithOwnersCollisions(false);
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}


void AEnemy::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	PawnSensor->OnSeePawn.AddDynamic(this, &AEnemy::OnSeePawn);
	PawnSensor->OnHearNoise.AddDynamic(this, &AEnemy::OnHearNoise);

	leftHandTrigger->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnHandTriggerOverlap);
	rightHandTrigger->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnHandTriggerOverlap);
}

void AEnemy::OnSeePawn(APawn* OtherActor)
{
	FVector directionToMove = OtherActor->GetActorLocation() - GetActorLocation();
	AddMovementInput(directionToMove, 0.3f);
}

void AEnemy::OnHearNoise(APawn* OtherPawn, const FVector &Location, float Volume)
{
	FVector directionToMove = Location - GetActorLocation();
	AddMovementInput(directionToMove, 0.3f);
}

//Enables the triggers before the attack happens
void AEnemy::OnPreAttack()
{
	leftHandTrigger->bGenerateOverlapEvents = 1;
	rightHandTrigger->bGenerateOverlapEvents = 1;

	IsAttacking = true;
}

void AEnemy::OnPerformAttack()
{

}

//Disables the triggers after the attack has finished
void AEnemy::OnPostAttack()
{
	leftHandTrigger->bGenerateOverlapEvents = 0;
	rightHandTrigger->bGenerateOverlapEvents = 0;

	IsAttacking = false;
}

void AEnemy::OnHandTriggerOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	//If we hit a gladiator, make it take damage
	AGladiator* const _tempGladiator = Cast<AGladiator>(OtherActor);
	if (_tempGladiator)
	{
		leftHandTrigger->bGenerateOverlapEvents = 0;
		rightHandTrigger->bGenerateOverlapEvents = 0;

		_tempGladiator->OnChangeHealthByAmount(5.0f);
	}
}