// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombiesRoca.h"
#include "ZombieRocaGrande.h"
#include "ZombieRocaFuego.h"

AZombies* AGeneradorZombiesRoca::ArmarZombies(FString ZombiesSKU)
{
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (ZombiesSKU.Equals("TierraGlobo")) {
		return GetWorld()->SpawnActor<AZombieRocaGrande>(AZombieRocaGrande::StaticClass());
	}
	else if (ZombiesSKU.Equals("TierraMinero")) {
		return GetWorld()->SpawnActor<AZombieRocaFuego>(AZombieRocaFuego::StaticClass());
	}
	else if (ZombiesSKU.Equals("TierraGigante")) {

		//Añadir otro zombie si se desea
		return 	nullptr;
	}
	else return nullptr; //Returna null si el valor no es valido
}