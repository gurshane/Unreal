// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UE4PROJONE_API UMyObject : public UObject
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float HpMax;
	
};
