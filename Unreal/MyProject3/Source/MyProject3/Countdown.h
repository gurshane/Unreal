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

	//Starting point of timer
	UPROPERTY(EditAnywhere)
	int32 iCountdownTime;

	UTextRenderComponent* CountdownText;

	FTimerHandle CountdownTimerHandle;

	void AdvanceTimer();

	UFUNCTION(BlueprintNativeEvent)
	void CountdownHasFinished();
	virtual void CountdownHasFinished_Implementation(); //required here because it gives the option for blue print functionality to be executed ontop of this function

	void UpdateTimerDisplay();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
