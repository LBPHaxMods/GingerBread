#include "SlideOverride.h"

USlideOverride::USlideOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Override = ESlideOverrideState::DEFAULT;
    this->IgnoreFlatSurfaces = true;
}


