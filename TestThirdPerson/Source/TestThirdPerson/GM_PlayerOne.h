// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GM_PlayerOne.generated.h"

UCLASS()
class TESTTHIRDPERSON_API AGM_PlayerOne : public AGameMode
{
	GENERATED_BODY()

	AGM_PlayerOne();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<APawn> PlayerRechage;

	float spawnZ = 500.f;

	UPROPERTY(EditAnywhere)
	float SpawnXMin;

	UPROPERTY(EditAnywhere)
	float SpawnXMax;

	UPROPERTY(EditAnywhere)
	float SpawnYMin;

	UPROPERTY(EditAnywhere)
	float SpawnYMax;

	void SpawnPlayerRecharge();
	
};
