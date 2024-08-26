#include "TouchScreenAppControlSliderComponent.h"

UTouchScreenAppControlSliderComponent::UTouchScreenAppControlSliderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HasReleasedMovement = false;
    this->SliderStartPos = 0.00f;
    this->MoverToolReference = NULL;
    this->bEnableSliderMoveDelegate = false;
    this->Material_FadeIn = NULL;
    this->Material_FadeOut = NULL;
}


