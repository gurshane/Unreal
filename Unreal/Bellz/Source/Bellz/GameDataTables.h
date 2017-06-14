// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "GameDataTables.generated.h"

USTRUCT(Blueprintable)
struct FWeaponStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString Icon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString DisplayName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Damage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 CooldownTime;

	FWeaponStruct()
	{
		Icon = "None";
		DisplayName = "None";
		Damage = 0;
		CooldownTime = 0;
	}
};

USTRUCT(Blueprintable)
struct FMissionStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Kill;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 Collect;

	FMissionStruct()
	{
		Kill = 0;
		Collect = 0;
	}
};


UCLASS()
class BELLZ_API AGameDataTables : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameDataTables();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game DataTables")
	UDataTable* WeaponsTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game DataTables")
	UDataTable* MissionsTable;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Game DataTables")
	TArray<FWeaponStruct> AllWeaponsData;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Game DataTables")
	TArray<FMissionStruct> AllMissionsData;

	UFUNCTION(BlueprintCallable, Category = "Game DataTables")
	void OnFetchAllTables();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	
};
