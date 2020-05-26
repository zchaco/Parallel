// Fill out your copyright notice in the Description page of Project Settings.


#include "CardImporter.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UCardImporter::LoadCards(FString FileNameA, TArray<FString>& SaveTextA)
{
     return FFileHelper::LoadFileToStringArray(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

bool UCardImporter::SaveCards(FString SaveTextB, FString FileNameB)
{
     return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}