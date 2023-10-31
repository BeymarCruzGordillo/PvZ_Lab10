// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod_Principal.h"
#include "GeneradorZombieEsqueleto.h"
#include "GeneradorZombiesRoca.h"

// Sets default values
AFactoryMethod_Principal::AFactoryMethod_Principal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFactoryMethod_Principal::BeginPlay()
{
	Super::BeginPlay();

	//Crea los generadores de zombies
	AGeneradorZombies* GeneradorZombiesRoca = GetWorld()->SpawnActor<AGeneradorZombiesRoca>(AGeneradorZombiesRoca::StaticClass());
	AGeneradorZombies* GeneradorZombieEsqueleto = GetWorld()->SpawnActor<AGeneradorZombieEsqueleto>(AGeneradorZombieEsqueleto::StaticClass());

	//Create an Outer Health Potion and log its name
	AZombies* Zombie;


	Zombie = GeneradorZombieEsqueleto->OrdenarZombies("ZombiEsqueleto");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es Esqueleto%s"), *Zombie->GetNombreZombie()));

	//Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraMinero");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaBuzo");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	
}

// Called every frame
void AFactoryMethod_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

