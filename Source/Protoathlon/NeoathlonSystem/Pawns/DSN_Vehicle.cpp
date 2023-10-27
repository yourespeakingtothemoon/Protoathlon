// Fill out your copyright notice in the Description page of Project Settings.


#include "NeoathlonSystem/Pawns/DSN_Vehicle.h"

// Sets default values
ADSN_Vehicle::ADSN_Vehicle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADSN_Vehicle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADSN_Vehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADSN_Vehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

