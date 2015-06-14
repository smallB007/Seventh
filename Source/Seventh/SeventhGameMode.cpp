// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Seventh.h"
#include "SeventhGameMode.h"
#include "SeventhHUD.h"
#include "SeventhCharacter.h"

ASeventhGameMode::ASeventhGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASeventhHUD::StaticClass();
}
