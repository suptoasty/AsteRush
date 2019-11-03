// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TwinStickGameMode.h"
#include "TwinStickPawn.h"

ATwinStickGameMode::ATwinStickGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ATwinStickPawn::StaticClass();
}

