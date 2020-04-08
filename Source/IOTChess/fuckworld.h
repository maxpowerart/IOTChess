// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "fuckworld.generated.h"

/**
 * 
 */
UCLASS()
class IOTCHESS_API Ufuckworld : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "FuckFuck")
		static bool Shah(UPARAM(ref) TArray<uint8>& Input, int a, int b);
};
