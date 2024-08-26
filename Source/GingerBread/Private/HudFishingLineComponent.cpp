#include "HudFishingLineComponent.h"

UHudFishingLineComponent::UHudFishingLineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoUpdateString = false;
    this->DefaultToAttachParent = true;
}

void UHudFishingLineComponent::UpdateString() {
}

void UHudFishingLineComponent::SetTargetComponent(USceneComponent* component, FName Socket) {
}


