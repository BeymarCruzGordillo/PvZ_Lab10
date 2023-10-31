// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieEsqueletoSoldado.h"

void AZombieEsqueletoSoldado::BeginPlay()
{


	//atributos
	NombreZombie = "Zombie esuqleto Soldado";
	Vida = 300;
	Armadura = "300";
	//materiales 
	Materiales.Add("espada, escudo");
}

void AZombieEsqueletoSoldado::Elaboracion()
{
	//Mensaje del tipo de elaboracion
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie Buzo"));

}