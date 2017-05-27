// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject3.h"
#include "SequentialCameras.h"

ASequentialCameras::ASequentialCameras()
{
	currentCameraPosition = 0;
	//IsValidIndex
	if (SequenceOfCameras.IsValidIndex(currentCameraPosition))
	{
		CurrentCamera = (SequenceOfCameras.GetData())->Camera;
		PrimaryActorTick.bCanEverTick = true;
	}
	else
	{
		PrimaryActorTick.bCanEverTick = false;
	}
}

void ASequentialCameras::BeginPlay()
{
	Super::BeginPlay();
}

void ASequentialCameras::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ASequentialCameras::Direct(float DeltaSeconds)
{

}


