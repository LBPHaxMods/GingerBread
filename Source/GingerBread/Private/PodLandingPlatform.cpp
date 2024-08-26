#include "PodLandingPlatform.h"

APodLandingPlatform::APodLandingPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlatformMesh = NULL;
    this->LandingTriggerCollider = NULL;
    this->LandingTriggerInteraction = NULL;
    this->Pod = NULL;
    this->bIsPodDocked = false;
    this->bHostSackboyIsInTriggerVolume = false;
}

bool APodLandingPlatform::ThisIsAnActiveBossPad() const {
    return false;
}

void APodLandingPlatform::StartPodLandingAnimation() {
}

void APodLandingPlatform::OnWorldUnlocked() {
}



bool APodLandingPlatform::IsThisPadUnlocked() const {
    return false;
}

bool APodLandingPlatform::IsThisBossPad() const {
    return false;
}


