// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController_Hero.h"
#include "MyPawn_Hero.h"

APlayerController_Hero::APlayerController_Hero()
{

}

void APlayerController_Hero::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveForward", this, &APlayerController_Hero::MoveForward);
	InputComponent->BindAxis("MoveRear", this, &APlayerController_Hero::MoveRear);
	bShowMouseCursor = true;
}

void APlayerController_Hero::Tick(float DeltaTime)
{
	FVector mouseDirection;
	DeprojectMousePositionToWorld(MousePos, mouseDirection);
	FVector pawnPos = MyPawn_Hero->GetActorLocation();
	MousePos.Z = pawnPos.Z;
	FVector dir = MousePos - pawnPos;
	dir.Normalize();
	MousePos = pawnPos + dir * 10000;
	//DrawDebugLine(GetWorld(), pawnPos, MousePos, FColor::Red, false, 0.1f, 0, 5);

}

void APlayerController_Hero::BeginPlay()
{
	Super::BeginPlay();

	MyPawn_Hero = Cast<AMyPawn_Hero>(GetPawn());
}

void APlayerController_Hero::MoveForward(float AxisValue)
{
	MyPawn_Hero ->MoveForward(AxisValue);

}

void APlayerController_Hero::MoveRear(float AxisValue)
{
	MyPawn_Hero->MoveRear(AxisValue);
}




