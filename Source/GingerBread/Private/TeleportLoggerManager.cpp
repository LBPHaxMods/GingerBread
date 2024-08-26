#include "TeleportLoggerManager.h"

ATeleportLoggerManager::ATeleportLoggerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditable = true;
    this->LoadDelay = 5.00f;
    this->SackboysToSpawn = 4;
    this->SackboySpawnDelay = 5.00f;
    this->LocationsAsset = NULL;
}

void ATeleportLoggerManager::OnCostumeLoaded() {
}


