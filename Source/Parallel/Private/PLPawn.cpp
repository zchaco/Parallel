// Fill out your copyright notice in the Description page of Project Settings.


#include "PLPawn.h"
#include "Camera/CameraComponent.h"

// Sets default values
APLPawn::APLPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(GetRootComponent());
	

}

// Called when the game starts or when spawned
void APLPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APLPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APLPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

