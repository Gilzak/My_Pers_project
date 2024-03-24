// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "GameStructs.h"
#include "Cannon.generated.h"

class UArrowComponent;


UCLASS()
class MYGAME_API ACannon : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ACannon();
	virtual void Tick(float DeltaTime) override;
	void Fire();
	bool IsReadyToFire();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UArrowComponent* ProjectTileSpawnPoint;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
	float FireRate = 1;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
	float FireRange = 1000;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
	float FireDamage = 1;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
	ECannonType Type = ECannonType::FireProjectile;

	FTimerHandle ReloadTimerHandle;

	bool ReadyToFire = false;

	void Reload();

};
