// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Workshop1GameMode.h"
#include "Workshop1Character.h"
#include "UObject/ConstructorHelpers.h"

AWorkshop1GameMode::AWorkshop1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
