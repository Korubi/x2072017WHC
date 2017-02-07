// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "WHC_DA.h"
#include "WHC_DAGameMode.h"
#include "WHC_DACharacter.h"

AWHC_DAGameMode::AWHC_DAGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
