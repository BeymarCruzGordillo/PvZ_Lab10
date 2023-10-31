// Copyright Epic Games, Inc. All Rights Reserved.

#include "PvZ_LabGameMode.h"
#include "PvZ_LabPawn.h"

APvZ_LabGameMode::APvZ_LabGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APvZ_LabPawn::StaticClass();
}

