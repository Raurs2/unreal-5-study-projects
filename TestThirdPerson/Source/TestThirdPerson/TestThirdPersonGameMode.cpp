// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestThirdPersonGameMode.h"
#include "TestThirdPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestThirdPersonGameMode::ATestThirdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
