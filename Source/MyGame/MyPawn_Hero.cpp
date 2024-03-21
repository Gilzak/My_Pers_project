// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn_Hero.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

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

SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring arm"));
SpringArm->SetupAttachment(BodyMesh);
SpringArm->bDoCollisionTest = false;
SpringArm->bInheritPitch = false;
SpringArm->bInheritYaw = false;
SpringArm->bInheritRoll = false;

CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
CameraComponent->SetupAttachment(SpringArm);

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
	FVector currentLocation = GetActorLocation();
	FVector forwardVector = GetActorForwardVector();
	FVector movePosition = currentLocation + forwardVector * MoveSpeed * _targetForwardAxisValue * DeltaTime;
	SetActorLocation(movePosition, true);

}
void AMyPawn_Hero::MoveForward(float AxisValue)
{
	_targetForwardAxisValue = AxisValue;
}




