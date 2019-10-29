// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AsteRushGameMode.h"
#include "AsteRushPlayerController.h"
#include "AsteRushCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAsteRushGameMode::AAsteRushGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAsteRushPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}