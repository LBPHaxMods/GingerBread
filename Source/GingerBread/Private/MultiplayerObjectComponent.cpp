#include "MultiplayerObjectComponent.h"

UMultiplayerObjectComponent::UMultiplayerObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LockDistance = 100.00f;
    this->bLockOffscreen = false;
    this->bLockDistanceToCamera = false;
    this->bLockDistanceToSackboy = false;
    this->UseContainingMotifLevelSelector = false;
    this->IsLocked = false;
}

void UMultiplayerObjectComponent::OnJoinedPlayerCountChanged(int32 Count) {
}


