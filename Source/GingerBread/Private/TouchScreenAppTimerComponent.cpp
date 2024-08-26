#include "TouchScreenAppTimerComponent.h"

UTouchScreenAppTimerComponent::UTouchScreenAppTimerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEssential = false;
    this->Time = 0.00f;
}

void UTouchScreenAppTimerComponent::ActivateApp(const bool NewActive, const float MaxTransitionTime, const bool DontReset) {
}


