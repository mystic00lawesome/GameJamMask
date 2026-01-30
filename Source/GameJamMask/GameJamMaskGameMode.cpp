// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJamMaskGameMode.h"
#include "GameJamMaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameJamMaskGameMode::AGameJamMaskGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
