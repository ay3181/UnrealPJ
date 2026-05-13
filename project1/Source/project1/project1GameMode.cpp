// Copyright Epic Games, Inc. All Rights Reserved.

#include "project1GameMode.h"
#include "project1Character.h"
#include "UObject/ConstructorHelpers.h"

Aproject1GameMode::Aproject1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
