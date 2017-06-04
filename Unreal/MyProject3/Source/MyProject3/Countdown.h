// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Countdown.generated.h"

UCLASS()
class MYPROJECT3_API ACountdown : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACountdown();

	int32 iCountdownTime;

	UTextRenderComponent* CountdownText;

	FTimerHandle CountdownTimerHandle;

	void AdvanceTimer();

	void CountdownHasFinished();

	void UpdateTimerDisplay();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
