#include "DebugMenuComponent.h"

UDebugMenuComponent::UDebugMenuComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugOverlapSphereRadiusCm = 12.00f;
    this->GameMode = NULL;
    this->GameInstance = NULL;
    this->DebugOverlapSphere = NULL;
    this->State = EDebugMenuState::NotVisible;
    this->bIsHostSackboyInProximity = false;
    this->bPlayerMadeChanges = false;
    this->bIsActiveMenu = false;
}


