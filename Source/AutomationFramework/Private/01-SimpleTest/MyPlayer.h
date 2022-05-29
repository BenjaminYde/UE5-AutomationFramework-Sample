// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyPlayer.generated.h"

UCLASS()
class AUTOMATIONFRAMEWORK_API AMyPlayer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	float GetHealth() const { return health; }
	float GetMaxHealth() const { return maxHealth; }

	void DamagePlayer(float amount);
	void HealPlayer(float amount);
	
protected:
	float health;
	float maxHealth = 100;
};
