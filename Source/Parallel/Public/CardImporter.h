// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CardImporter.generated.h"

/**
 * 
 */
UCLASS()
class PARALLEL_API UCardImporter : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "Card Import"))
	static bool LoadCards(FString FileNameA, TArray<FString>& SaveTextA);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Card Import"))
	static bool SaveCards(FString SaveTextB, FString FileNameB);

};
