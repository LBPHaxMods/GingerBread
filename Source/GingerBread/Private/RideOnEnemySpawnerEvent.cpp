#include "RideOnEnemySpawnerEvent.h"

ARideOnEnemySpawnerEvent::ARideOnEnemySpawnerEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivateWithPlayerAmount.AddDefaulted(4);
    this->MaxEnemiesAlive = 3;
    this->DelayBetweenSpawns = 0.50f;
    this->MinDistanceFromSB = 12.00f;
    this->MinDistanceFromEnemies = 30.00f;
    this->RandomizeOrder = false;
    this->RepeatSpawns = true;
    this->NeedToWaitAllDead = true;
    this->FullRefill = false;
    this->FullRefillDelay = 0.50f;
    this->RetriggerableStopOnFailedSpawn = false;
    this->ForceSpawnLocation = false;
}

void ARideOnEnemySpawnerEvent::StartRefilling() {
}

void ARideOnEnemySpawnerEvent::SpawnNextAI() {
}

void ARideOnEnemySpawnerEvent::OnAISpawned(AAISpawner* Spawner, const TArray<AGingerbreadAICharacter*>& AIs) {
}


