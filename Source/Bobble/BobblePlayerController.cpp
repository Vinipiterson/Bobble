// Copyright Epic Games, Inc. All Rights Reserved.

#include "BobblePlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "BobbleCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ABobblePlayerController::ABobblePlayerController()
{
	
}

void ABobblePlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}