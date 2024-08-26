#include "SpikeyRollerSpawner.h"

ASpikeyRollerSpawner::ASpikeyRollerSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Length = 20.00f;
    this->RollingSpeed = 10.00f;
    this->CanRollBothWays = false;
    this->ScaleUpOnSpawn = false;
    this->ScaleUpTime = 0.50f;
    this->StartScale = 0.20f;
    this->SpawnClass = NULL;
}


