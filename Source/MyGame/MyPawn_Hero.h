// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn_Hero.generated.h"


class APlayerController_Hero;

UCLASS()
class MYGAME_API AMyPawn_Hero : public APawn
{
	GENERATED_BODY()

public:
	
	AMyPawn_Hero();
	UFUNCTION()
	void MoveForward(float AxisValue);
	void MoveRear(float AxisValue);

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component")
	UStaticMeshComponent* BodyMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component")
	UStaticMeshComponent* WeaponMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component")
	class UBoxComponent* BoxCollision;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	class UCameraComponent* CameraComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	class USpringArmComponent* SpringArm;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movment|Speed")
	float MoveSpeed = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon|interp|speed")
	float WeaponRotationInterpolationKey = 0.5f;

	float targetForwardAxisValue;
	float targetRearAxisValue;

	UPROPERTY()
	APlayerController_Hero* PlayerController;


	

};
