// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CameraDirector.generated.h"

USTRUCT()
struct FDirectorCamera
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	AActor* Camera;

	UPROPERTY(EditAnywhere)
	bool bIsActive;

	FDirectorCamera()
	{
	}

};

UCLASS()
class MYPROJECT3_API ACameraDirector : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere)
	AActor* CameraOne;

	UPROPERTY(EditAnywhere)
	AActor* CameraTwo;

	UPROPERTY(EditAnywhere)
	float FTimeToNextCameraChange;

	UPROPERTY(EditAnywhere)
    float FTimeBetweenCameraChanges;

	UPROPERTY(EditAnywhere)
	 float FSmoothBlendTime;

	// Sets default values for this actor's properties
	ACameraDirector();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};