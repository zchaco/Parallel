// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PLPawn.generated.h"

UCLASS()
class PARALLEL_API APLPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APLPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UProperties
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Setup")
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="Setup")
	UStaticMeshComponent* Avatar;

};
