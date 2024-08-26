#include "DynamicHitPointsComponent.h"

UDynamicHitPointsComponent::UDynamicHitPointsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeDilationSFX = NULL;
    this->TimeDilationHaptics = NULL;
}

void UDynamicHitPointsComponent::Multicast_TriggerTimeDilationSFX_Implementation() {
}


