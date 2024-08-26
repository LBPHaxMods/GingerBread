#include "StompysteinPhaseComponent.h"

UStompysteinPhaseComponent::UStompysteinPhaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UStompysteinPhaseComponent::OnPhaseChange(EStompysteinPhase NewPhase) {
}

EStompysteinPhase UStompysteinPhaseComponent::GetCurrentPhase() const {
    return EStompysteinPhase::Invalid;
}


