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
	bodySphereTrigger->AttachTo(Mesh);

	//color of hand trigger
	FColor handsTriggersColor = FColor(0, 0, 255, 255);

	//setup and attach left hand trigger
	leftHandTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("LeftHandTrigger"));
	leftHandTrigger->SetSphereRadius(70.0f);
	leftHandTrigger->AttachTo(Mesh, "hand_lf", EAttachLocation::SnapToTarget);
	leftHandTrigger->ShapeColor = handsTriggersColor;
	leftHandTrigger->bGenerateOverlapEvents = 0;

	//setup and attach right hand trigger
	rightHandTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("RightHandTrigger"));
	rightHandTrigger->SetSphereRadius(70.0f);
	rightHandTrigger->AttachTo(Mesh, "hand_rt", EAttachLocation::SnapToTarget);
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

