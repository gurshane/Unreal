// Fill out your copyright notice in the Description page of Project Settings.

#include "Bellz.h"
#include "GameDataTables.h"


// Sets default values
AGameDataTables::AGameDataTables()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameDataTables::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameDataTables::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AGameDataTables::OnFetchAllTables()
{
	static const FString ContextString(TEXT("Name"));

	//Gets the first column in WEaponsTable as an array
	TArray<FName> weaponsTableRowsNames = WeaponsTable->GetRowNames();

	for (int32 i = 1; i < weaponsTableRowsNames.Num() + 1; i++)
	{
		FString IndexString = FString::FromInt((int32)i); //converts int to string
		FName IndexName = FName(*IndexString); //conversts string to FName

		FWeaponStruct* aStructRow = WeaponsTable->FindRow<FWeaponStruct>(IndexName, ContextString, true); //Goes to the weapons table and asks it to give a pointer to the row which has IndexName in the ContextString column
		AllWeaponsData.Add(*aStructRow);
	}

	TArray<FName> missionTableRowNames = MissionsTable->GetRowNames();

	for (int32 i = 1; i < missionTableRowNames.Num() + 1; i++)
	{
		FString IndexString = FString::FromInt((int32)i);
		FName IndexName = FName(*IndexString);
		
		FMissionStruct* aMissionRow = MissionsTable->FindRow<FMissionStruct>(IndexName, ContextString, true);
		AllMissionsData.Add(*aMissionRow);
	}
	
	//the user should supply the name of the table they want data for or at least a pointer to it to make this a more re-usuable method
	/*
	for(int32 e = 1; e < missionsTableRowsNames.Num() + 1; e++)
	{
		FString message = TEXT("Number: ") + FString::FromInt(c) + TEXT(" Name: ") + AllWeaponsData[c]->DisplayName;
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, message);
	}
	*/
}

