// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GauntletGameMode.h"
#include "GauntletPlayerController.h"
#include "GauntletCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGauntletGameMode::AGauntletGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGauntletPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}