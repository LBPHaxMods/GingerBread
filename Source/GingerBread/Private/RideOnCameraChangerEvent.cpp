#include "RideOnCameraChangerEvent.h"

ARideOnCameraChangerEvent::ARideOnCameraChangerEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivateWithPlayerAmount.AddDefaulted(4);
    this->bEnableAdaptiveCamera = false;
}

void ARideOnCameraChangerEvent::SetStartingCameraSettings(const FCameraSettings& Settings) {
}


