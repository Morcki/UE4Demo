// Copyright Epic Games, Inc. All Rights Reserved.

#include "mShootTargetGameMode.h"
#include "mShootTargetCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmShootTargetGameMode::AmShootTargetGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/mockiCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
