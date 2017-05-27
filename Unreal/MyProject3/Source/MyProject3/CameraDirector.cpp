// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject3.h"
#include "CameraDirector.h"
//GameplayStatics is a set of functions relevant to this tutorial


// Sets default values
ACameraDirector::ACameraDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ACameraDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACameraDirector::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	Direct( DeltaTime );
}

void ACameraDirector::Direct( float DeltaTime )
{
	//count down to next camera swap
	FTimeToNextCameraChange -= DeltaTime;

	//If it is time to swap to the next camera
	if (FTimeToNextCameraChange <= 0.0f)
	{
		//reset the time to next camera swap
		FTimeToNextCameraChange += FTimeBetweenCameraChanges;

		//Find the Player Controller(what is this? some sort of global object with references to the active camera and such?) using the GameplayStatics library
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		if (OurPlayerController)
		{
			//If we arent currently using camera one and it exists
			if ((OurPlayerController->GetViewTarget() != CameraOne) && (CameraOne != nullptr))
			{
				//Blend to this camera
				OurPlayerController->SetViewTargetWithBlend(CameraOne, FSmoothBlendTime);
			}
			//Same idea for camera two
			else if ((OurPlayerController->GetViewTarget() != CameraTwo) && (CameraTwo != nullptr))
			{
				OurPlayerController->SetViewTargetWithBlend(CameraTwo, FSmoothBlendTime);
			}
		}
	}
}

