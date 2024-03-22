// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerController_Hero.generated.h"


/**
 * 
 */
UCLASS()
class MYGAME_API APlayerController_Hero : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	class AMyPawn_Hero* MyPawn_Hero;
public:
	APlayerController_Hero();
	void SetupInputComponent() override;
protected:
	virtual void BeginPlay() override;
	void MoveForward(float AxisValue);
	void MoveRear(float AxisValue);
	
};
