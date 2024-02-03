// Copyright Epic Games, Inc. All Rights Reserved.

#include "UdemyUE5IntroProjectGameMode.h"
#include "UdemyUE5IntroProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemyUE5IntroProjectGameMode::AUdemyUE5IntroProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
