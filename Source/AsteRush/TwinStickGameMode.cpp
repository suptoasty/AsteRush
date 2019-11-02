// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TwinStickGameMode.h"
#include "TwinStickPawn.h"
#include "UObject/ConstructorHelpers.h"

ATwinStickGameMode::ATwinStickGameMode()
{
	// set default pawn class to our character class
	//DefaultPawnClass = ATwinStickPawn::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

