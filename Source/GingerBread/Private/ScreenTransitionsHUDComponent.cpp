#include "ScreenTransitionsHUDComponent.h"

UScreenTransitionsHUDComponent::UScreenTransitionsHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mScreenState = EScreenTransitionState::Off;
    this->mCurrentType = EScreentransitionTypes::Horizontal;
}




bool UScreenTransitionsHUDComponent::IsTransitioning() const {
    return false;
}

EScreentransitionTypes UScreenTransitionsHUDComponent::GetRandomType() {
    return EScreentransitionTypes::Horizontal;
}


