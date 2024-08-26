#include "KingFroogleDynamicHitPointsComponent.h"

UKingFroogleDynamicHitPointsComponent::UKingFroogleDynamicHitPointsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UKingFroogleDynamicHitPointsComponent::OnFightStarted(int32 SackboyNum) {
}

bool UKingFroogleDynamicHitPointsComponent::HasPassedThreshold() {
    return false;
}


