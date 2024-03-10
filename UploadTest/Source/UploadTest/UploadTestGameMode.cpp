// Copyright Epic Games, Inc. All Rights Reserved.

#include "UploadTestGameMode.h"
#include "UploadTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUploadTestGameMode::AUploadTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
