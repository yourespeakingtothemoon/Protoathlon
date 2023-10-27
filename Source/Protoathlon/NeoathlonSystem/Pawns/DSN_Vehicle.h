// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DSN_Vehicle.generated.h"

UCLASS()
class PROTOATHLON_API ADSN_Vehicle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADSN_Vehicle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
