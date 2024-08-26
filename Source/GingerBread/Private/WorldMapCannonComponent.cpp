#include "WorldMapCannonComponent.h"

UWorldMapCannonComponent::UWorldMapCannonComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowOrbsAndSlots = true;
    this->MemoryOrbSeparationAngleDegrees = 15.00f;
    this->MemoryOrbDistanceFromCentreCm = 20.00f;
    this->MemoryOrbHeightOffsetCm = 1.00f;
    this->Cannon = NULL;
    this->GameInstance = NULL;
    this->WorldMasterTable = NULL;
}

void UWorldMapCannonComponent::WaitForHostSaveDataReady() {
}



