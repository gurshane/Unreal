// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "FPSTestGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPSTEST_API AFPSTestGameMode : public AGameMode
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
	
	
};
