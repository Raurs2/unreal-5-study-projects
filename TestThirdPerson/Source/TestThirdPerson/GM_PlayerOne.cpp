// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_PlayerOne.h"
#include "GameFramework/Actor.h"

AGM_PlayerOne::AGM_PlayerOne()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AGM_PlayerOne::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AGM_PlayerOne::SpawnPlayerRecharge, FMath::RandRange(2, 5), true);

}

void AGM_PlayerOne::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AGM_PlayerOne::SpawnPlayerRecharge()
{
	float randX = FMath::RandRange(SpawnXMin, SpawnXMax);
	float randY = FMath::RandRange(SpawnYMin, SpawnYMax);

	FVector SpawnPosition = FVector(randX, randY, spawnZ);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
	PlayerRechage->GetDefaultObject<APawn>()->Tags.Add(FName("PlayerRecharge"));
	GetWorld()->SpawnActor(PlayerRechage, &SpawnPosition, &SpawnRotation);
}
