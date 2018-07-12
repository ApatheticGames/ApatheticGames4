// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FirstPerSonProjectGameMode.h"
#include "FirstPerSonProjectHUD.h"
#include "FirstPerSonProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstPerSonProjectGameMode::AFirstPerSonProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstPerSonProjectHUD::StaticClass();
}
