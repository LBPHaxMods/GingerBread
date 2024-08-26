#include "MotifLevelSelector.h"

AMotifLevelSelector::AMotifLevelSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsPreloaded = false;
}

void AMotifLevelSelector::TeleportPlayersToCheckpoint() {
}

void AMotifLevelSelector::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMotifLevelSelector::OnInteractBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

bool AMotifLevelSelector::GetLockState() {
    return false;
}

void AMotifLevelSelector::ForceLevelLoad() {
}


