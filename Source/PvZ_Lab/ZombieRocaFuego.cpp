// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieRocaFuego.h"

void AZombieRocaFuego::BeginPlay()
{
	//atributos
	NombreZombie = "Zombie de Roca Fuego";
	Vida = FMath::FRandRange(170, 190);
	Armadura = "doble vida";
	//materiales 
	Materiales.Add("rocas, fuego");

}

void AZombieRocaFuego::Elaboracion()
{
	//Mensaje del tipo de elaboracion
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie en Roca Fuego"));

	
}
