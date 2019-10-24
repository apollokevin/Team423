// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FakeWatchProjectGameMode.h"
#include "FakeWatchProjectHUD.h"
#include "FakeWatchProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFakeWatchProjectGameMode::AFakeWatchProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFakeWatchProjectHUD::StaticClass();
}
