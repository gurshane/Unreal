// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class BELLZ_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void AEnemy::PostInitializeComponents();
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	//Body trigger to take damage
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Triggers, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* bodySphereTrigger;

	//Left hand trigger to deal damage
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Triggers, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* leftHandTrigger;

	//Right hand trigger to deal damage
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Triggers, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* rightHandTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Behavior")
	float TotalHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Behavior")
	float AttackRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Behavior")
	float AttackDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Behavior")
	bool IsDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Behavior")
	bool IsAttacking;

	//Sensing component allows the AI to hear and see the player
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy AI")
	class UPawnSensingComponent* PawnSensor;

	//Reference to the behavior tree the ai is going to use
	UPROPERTY(EditAnywhere, Category = "EnemyAI")
	class UBehaviorTree* EnemyBehaviorTree;

	//Before, During, and After the attack
	UFUNCTION(BlueprintCallable, Category = "Enemy AI")
	void OnPreAttack();

	UFUNCTION(BlueprintCallable, Category = "Enemy AI")
	void OnPerformAttack();

	UFUNCTION(BlueprintCallable, Category = "Enemy AI")
	void OnPostAttack();

	UFUNCTION()
	void OnHearNoise(APawn* OtherActor, const FVector &Location, float Volume);

	UFUNCTION()
	void OnSeePawn(APawn* OtherPawn);

	UFUNCTION()
	void OnHandTriggerOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	FORCEINLINE class USphereComponent* GetBodySphereTrigger() const { return bodySphereTrigger; }
};
