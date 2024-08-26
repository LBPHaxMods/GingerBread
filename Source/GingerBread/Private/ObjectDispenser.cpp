#include "ObjectDispenser.h"

AObjectDispenser::AObjectDispenser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnClass = NULL;
    this->CreativeOrbUnlockCount = 0;
    this->bSpawnAllowed = true;
    this->SpawnDelaySeconds = 1.00f;
    this->bIsLocked = true;
    this->SpawnedActor = NULL;
    this->SpawnTriggerComponent = NULL;
}

AActor* AObjectDispenser::SpawnCreation() {
    return NULL;
}

void AObjectDispenser::SetLocked(bool bLocked) {
}

void AObjectDispenser::OnOverlapEnd(UPrimitiveComponent* SphereComponent, AActor* OtherActor, UPrimitiveComponent* OtherPrimitive, int32 BodyIndex) {
}



void AObjectDispenser::OnCreativeOrbCollected(int32 orbCount) {
}


bool AObjectDispenser::IsDispenserClear() const {
    return false;
}


