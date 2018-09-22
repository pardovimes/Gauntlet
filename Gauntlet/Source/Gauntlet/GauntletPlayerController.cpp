// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GauntletPlayerController.h"
#include "AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GauntletCharacter.h"
#include "Engine/World.h"

AGauntletPlayerController::AGauntletPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AGauntletPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

}
