// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameStructs.generated.h"

/**
 * 
 */
UCLASS()
class MYGAME_API UGameStructs : public UObject
{
	GENERATED_BODY()
	
};
UENUM(BlueprintType)
enum class ECannonType 
{
	FireProjectile = 0,
	FireTrace = 1
};