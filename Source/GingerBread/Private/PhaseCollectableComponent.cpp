#include "PhaseCollectableComponent.h"

UPhaseCollectableComponent::UPhaseCollectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhaseObjectComponent = NULL;
}

void UPhaseCollectableComponent::OnPhaseLightExit() {
}

void UPhaseCollectableComponent::OnPhaseLightEnter() {
}


