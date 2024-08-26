#include "MeanieMinibossFallComponent.h"

UMeanieMinibossFallComponent::UMeanieMinibossFallComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DelayBeforeVulnerable = 0.00f;
    this->OnFloorDuration = 2.50f;
    this->RecoveryDuration = 1.20f;
    this->IsFallen = false;
}


