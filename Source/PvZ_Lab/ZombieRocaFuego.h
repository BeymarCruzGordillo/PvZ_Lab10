// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombies.h"
#include "ZombieRocaFuego.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_LAB_API AZombieRocaFuego : public AZombies
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Elabora el zombie
	virtual void Elaboracion() override;
};
