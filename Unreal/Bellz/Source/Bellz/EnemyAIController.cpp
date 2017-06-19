// Fill out your copyright notice in the Description page of Project Settings.

#include "Bellz.h"
#include "EnemyAIController.h"
#include "Enemy.h"
#include "Gladiator.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"

AEnemyAIController::AEnemyAIController()
{
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackBoardComp"));

	BehaviourComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourComp"));

	bWantsPlayerState = true;
}

//Take in an enemy and take control and reference of the pawn we are possessing
void AEnemyAIController::Possess(APawn* InPawn)
{
	Super::Possess(InPawn);

	AEnemy* _tempEnemy = Cast<AEnemy>(InPawn);
	if (_tempEnemy && _tempEnemy->EnemyBehaviorTree)
	{
		//Takes blackboard from the enemy ai passed in
		BlackboardComp->InitializeBlackboard(*_tempEnemy->EnemyBehaviorTree->BlackboardAsset);
		EnemyKeyID = BlackboardComp->GetKeyID("Enemy");
		EnemyPositionKeyID = BlackboardComp->GetKeyID("EnemyPosition");
		//Takes the behavior tree from the enemy ai passed in
		BehaviourComp->StartTree(*_tempEnemy->EnemyBehaviorTree);
	}
}

void AEnemyAIController::SetEnemy(class APawn* InPawn)
{
	if (BlackboardComp)
	{
		//Putting values into our blackboard
		BlackboardComp->SetValue<UBlackboardKeyType_Object>(EnemyKeyID, InPawn);
		BlackboardComp->SetValueAsVector(FName(*(FString::FromInt(EnemyPositionKeyID))), InPawn->GetActorLocation());
		SetFocus(InPawn); //Sets the focal point to the given pawn(the enemy player)
	}
}

class AGladiator* AEnemyAIController::GetEnemy() const
{
	if (BlackboardComp)
	{
		//Gets the enemy from the blackboard and casts it back to a gladiator
		return Cast<AGladiator>(BlackboardComp->GetValue<UBlackboardKeyType_Object>(EnemyKeyID));
	}

	return NULL;
}

void AEnemyAIController::UpdateControlRotation(float DeltaTime, bool bUpdatePawn)
{
	//Look towards what we are focusing on
	FVector TheCenter = GetFocalPoint();
	if (!TheCenter.IsZero() && GetPawn())
	{
		//find direction in which to look
		FVector Direction = TheCenter - GetPawn()->GetActorLocation();
		FRotator TheNewRotation = Direction.Rotation(); //find rotation of this vector

		TheNewRotation.Yaw = FRotator::ClampAxis(TheNewRotation.Yaw);
		SetControlRotation(TheNewRotation);

		APawn* const _tempPawn = GetPawn();
		if (_tempPawn && bUpdatePawn)
		{
			//rotate to face the target
			_tempPawn->FaceRotation(TheNewRotation, DeltaTime);
		}
	}
}

void AEnemyAIController::OnSearchForEnemy()
{
	APawn* _tempPawn = GetPawn();
	if (_tempPawn == NULL)
	{
		return;
	}

	const FVector _tempLocation = _tempPawn->GetActorLocation();
	float BestDistSq = MAX_FLT;
	AGladiator* PlayerPawn = NULL;

	for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; ++It)
	{
		if (PawnCanBeSeen(*It))
		{
			AGladiator* TestPawn = Cast<AGladiator>(*It);
			AEnemy* const _testEnemy = Cast<AEnemy>(TestPawn);

			if (_testEnemy)
			{
				//if this is reached, it means that we are looking at a enemy not a gladiator because testpawn and testenemy are null, cast didnt work
			}
			else
			{
				if (TestPawn && TestPawn->GetIsStillAlive())
				{
					const float _distanceSq = (TestPawn->GetActorLocation() - _tempLocation).SizeSquared();
					if (_distanceSq < BestDistSq)
					{
						BestDistSq = _distanceSq;
						PlayerPawn = TestPawn;
					}
				}
			}
		}
	}

	if (PlayerPawn)
	{
		SetEnemy(PlayerPawn);
	}
}

bool AEnemyAIController::PawnCanBeSeen(APawn* OtherPawn)
{
	return true;
}