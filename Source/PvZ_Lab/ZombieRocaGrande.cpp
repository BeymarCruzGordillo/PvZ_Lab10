// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieRocaGrande.h"

void AZombieRocaGrande::BeginPlay()
{
	//atributos
	NombreZombie = "Zombie de Roca Grande";
	Vida = 600;
	Armadura = "200";
	//materiales 
	Materiales.Add("roca");

}

void AZombieRocaGrande::Elaboracion()
{
	//Mensaje del tipo de elaboracion
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie Roca Grande"));

}
