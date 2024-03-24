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
	UPROPERTY()
	FVector MousePos;

public:
	APlayerController_Hero();
	void SetupInputComponent() override;
	void Tick(float DeltaTime) override;
	FVector GetMousePos() { return MousePos; };
protected:
	virtual void BeginPlay() override;
	void MoveForward(float AxisValue);
	void MoveRear(float AxisValue);
	void Fire();
};
