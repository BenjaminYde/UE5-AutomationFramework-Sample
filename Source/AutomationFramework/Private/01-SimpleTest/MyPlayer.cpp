// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"


// Sets default values
AMyPlayer::AMyPlayer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	maxHealth = 100;
	health = maxHealth;
}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyPlayer::DamagePlayer(float amount)
{
}

void AMyPlayer::HealPlayer(float amount)
{
}

