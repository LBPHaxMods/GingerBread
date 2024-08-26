#include "CameraDOFSettings.h"

FCameraDOFSettings::FCameraDOFSettings() {
    this->TrackingMethod = ECameraTrackingMethod::Manual;
    this->RegionSizeMethod = ECameraTrackingMethod::Manual;
    this->ManualFocusDistance = 0.00f;
    this->Aperture = 0.00f;
    this->FocalLength = 0.00f;
    this->NearFocusRegionSize = 0.00f;
    this->FarFocusRegionSize = 0.00f;
}

