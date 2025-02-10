// Copyright Epic Games, Inc. All Rights Reserved.

#include "Portfolio_3DGameMode.h"
#include "Portfolio_3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

APortfolio_3DGameMode::APortfolio_3DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
