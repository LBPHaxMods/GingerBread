#include "RideOnScrewBombSpawner.h"

ARideOnScrewBombSpawner::ARideOnScrewBombSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivateWithPlayerAmount.AddDefaulted(4);
    this->NumScrewsToSpawn = 1;
    this->DelayBetweenSpawns = 0.50f;
    this->DelayFirstSpawn = false;
    this->RandomDeviation = false;
    this->MinDistanceAwayFromBombs = 40.00f;
    this->BombsToSpawn = NULL;
    this->LevelType = ELevelType::Himalaya;
}


