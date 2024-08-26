#include "InitialRideOnServerSettings.h"

FInitialRideOnServerSettings::FInitialRideOnServerSettings() {
    this->bSynced = false;
    this->bUseAdaptiveCam = false;
    this->bFocusAllowTracking = false;
    this->bUseSplineRotation = false;
    this->bMoving = false;
    this->CamMinDistance = 0.00f;
    this->CamMaxDistance = 0.00f;
    this->CamFocusOffsetRight = 0.00f;
    this->CamFocusOffsetUp = 0.00f;
    this->FocusBlendWeight = 0.00f;
    this->CullDistance = 0.00f;
    this->CameraArea = NULL;
}

