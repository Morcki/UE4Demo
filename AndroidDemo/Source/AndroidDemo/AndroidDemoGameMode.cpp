// Copyright Epic Games, Inc. All Rights Reserved.

#include "AndroidDemoGameMode.h"
#include "AndroidDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAndroidDemoGameMode::AAndroidDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
