// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSTest.h"
#include "FPSTestGameMode.h"

void AFPSTestGameMode::StartPlay()
{
	Super::StartPlay();
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello world, this is a fps game mode"));
	}
}


