#include "PickupContainerManager.h"

APickupContainerManager::APickupContainerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaximumAutoTargetDistance = 10.00f;
    this->DefaultContainerAuraPS = NULL;
    this->MemoryOrbSpawnSound = NULL;
    this->AlreadySpawnedLivesDistance = 200.00f;
}

bool APickupContainerManager::ShouldSpawnLife(bool BigLife, UObject* WorldContextObject) {
    return false;
}

bool APickupContainerManager::ShouldPickupAutoTargetInstigatorWithModifierTableRowInfo_Implementation(UPickupContainerComponent* PickupContainerComponent, ASackboy* InstigatingSackboy, const FPickupContainerOpenWithModifierTableRowInfo& OpeningInfo) const {
    return false;
}

APickupContainerManager* APickupContainerManager::GetInstance(UObject* WorldContextObject) {
    return NULL;
}

bool APickupContainerManager::GetContentsData(const TEnumAsByte<EPickupContainerContent::Type> Contents, FPickupContainerContentsData& OutData) const {
    return false;
}


