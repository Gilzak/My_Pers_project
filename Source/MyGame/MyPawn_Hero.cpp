// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn_Hero.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMyPawn_Hero::AMyPawn_Hero()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = BoxCollision;
BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
BodyMesh->SetupAttachment(BoxCollision);
WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon"));
WeaponMesh->SetupAttachment(BodyMesh);
CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
CameraComponent->SetupAttachment(BodyMesh);

}

// Called when the game starts or when spawned
void AMyPawn_Hero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn_Hero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




