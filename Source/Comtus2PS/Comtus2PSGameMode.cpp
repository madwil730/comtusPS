// Copyright Epic Games, Inc. All Rights Reserved.

#include "Comtus2PSGameMode.h"
#include "Comtus2PSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AComtus2PSGameMode::AComtus2PSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
