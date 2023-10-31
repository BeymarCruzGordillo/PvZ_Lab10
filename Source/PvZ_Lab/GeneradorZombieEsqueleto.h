// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneradorZombies.h"
#include "GeneradorZombieEsqueleto.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_LAB_API AGeneradorZombieEsqueleto : public AGeneradorZombies
{
	GENERATED_BODY()
	
		
		virtual AZombies* ArmarZombies(FString ZombiesSKU) override;
};
