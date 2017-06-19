// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class BELLZ_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
	AEnemyAIController();

	UPROPERTY(transient)
	UBlackboardComponent* BlackboardComp;

	UPROPERTY(transient)
	UBehaviorTreeComponent* BehaviourComp;

	virtual void Possess(class APawn* InPawn) override;

	//virtual void BeginInactiveState() override;
	
	UFUNCTION(BlueprintCallable, Category = Behaviour)
	void SetEnemy(class APawn* InPawn);

	UFUNCTION(BlueprintCallable, Category = Behaviour)
	class AGladiator* GetEnemy() const;

	//Rotates ai towards player
	UFUNCTION(BlueprintCallable, Category = Behaviour)
	void UpdateControlRotation(float DeltaTime, bool bUpdatePawn);

	//Determines if the target can be seen by this ai
	UFUNCTION(BlueprintCallable, Category = Behaviour)
	bool PawnCanBeSeen(APawn* target);

	//Called when searching for enemey
	UFUNCTION(BlueprintCallable, Category = Behaviour)
	void OnSearchForEnemy();

protected:

	//Used to get and store data in the blackboard
	int32 EnemyKeyID;
	int32 EnemyPositionKeyID;
};
