#include "ProogleUnderseaLaunchComponent.h"

UProogleUnderseaLaunchComponent::UProogleUnderseaLaunchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ColliderScaleDuration = 0.00f;
}

void UProogleUnderseaLaunchComponent::OnLaunchStart(EProogleLaunchType LaunchType) {
}

void UProogleUnderseaLaunchComponent::OnLaunchEnd(EProogleLaunchType LaunchType) {
}


