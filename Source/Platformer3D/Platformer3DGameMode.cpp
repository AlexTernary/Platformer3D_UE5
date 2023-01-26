// Copyright Epic Games, Inc. All Rights Reserved.

#include "Platformer3DGameMode.h"
#include "Platformer3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlatformer3DGameMode::APlatformer3DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
