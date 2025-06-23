// Copyright Epic Games, Inc. All Rights Reserved.

#include "RDGSampleGameMode.h"
#include "RDGSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARDGSampleGameMode::ARDGSampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
