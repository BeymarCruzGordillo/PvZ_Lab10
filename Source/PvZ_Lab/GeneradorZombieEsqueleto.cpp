// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombieEsqueleto.h"
#include "ZombieEsqueletoSoldado.h"

AZombies* AGeneradorZombieEsqueleto::ArmarZombies(FString ZombiesSKU)
{
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (ZombiesSKU.Equals("AguaBuzo")) {
		return GetWorld()->SpawnActor<AZombieEsqueletoSoldado>(AZombieEsqueletoSoldado::StaticClass());
	}
	else if (ZombiesSKU.Equals("AguaDelfin")) {
		return nullptr;
	}
	else return nullptr; //Returna null si el valor no es valido

}