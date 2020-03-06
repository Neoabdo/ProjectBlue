// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProjectBlueGameMode.h"
#include "ProjectBluePlayerController.h"
#include "ProjectBlueCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectBlueGameMode::AProjectBlueGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectBluePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}