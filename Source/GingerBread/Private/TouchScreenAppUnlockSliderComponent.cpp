#include "TouchScreenAppUnlockSliderComponent.h"

UTouchScreenAppUnlockSliderComponent::UTouchScreenAppUnlockSliderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDeactivateOnUnlock = true;
    this->Start = NULL;
    this->end = NULL;
    this->bScaleForMP = false;
    this->MPSliderMaxOffset = 55.00f;
    this->MPSliderMinOffset = 10.00f;
    this->Material_FadeIn = NULL;
    this->Material_FadeOut = NULL;
    this->Material_Complete = NULL;
}


