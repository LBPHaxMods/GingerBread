#include "MeanieMinibossDynamicHitPointsComponent.h"

UMeanieMinibossDynamicHitPointsComponent::UMeanieMinibossDynamicHitPointsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMeanieMinibossDynamicHitPointsComponent::OnFightStarted(int32 SackboyNum) {
}

bool UMeanieMinibossDynamicHitPointsComponent::HasPassedThreshold() {
    return false;
}


