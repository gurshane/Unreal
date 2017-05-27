// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CameraDirector.h"
#include "SequentialCameras.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT3_API ASequentialCameras : public ACameraDirector
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere)
		TArray<FDirectorCamera> SequenceOfCameras;
		
		UPROPERTY(EditAnywhere)
		AActor* CurrentCamera;

		int32 currentCameraPosition;

		ASequentialCameras();

		virtual void BeginPlay() override;

		virtual void Tick(float DeltaSeconds) override;

		virtual void Direct(float DeltaSeconds) override;
	
	
};
