#include "CameraSettings.h"

FCameraSettings::FCameraSettings() {
    this->MinimumDistance = 0.00f;
    this->MaximumDistance = 0.00f;
    this->FOV = 0.00f;
    this->MaximumPanSpeed = 0.00f;
    this->MaximumPanAcceleration = 0.00f;
    this->MaximumRotationSpeed = 0.00f;
    this->MaximumRotationAcceleration = 0.00f;
    this->PanSpeedCurve = NULL;
    this->PanAccelerationCurve = NULL;
    this->MaximumLeadPanSpeed = 0.00f;
    this->MaximumZoomOutSpeed = 0.00f;
    this->MaximumZoomInSpeed = 0.00f;
    this->ZoomInDelay = 0.00f;
    this->ZoomRampingCurve = NULL;
    this->FocusOffsetRight = 0.00f;
    this->FocusOffsetUp = 0.00f;
    this->MultiplayerFocusOffset = false;
    this->AudioListenerPositionRatio = 0.00f;
    this->DampingMultiplier = 0.00f;
    this->POIMinWeightThreshold = 0.00f;
    this->CameraDepthPaddingActive = false;
    this->CameraDepthMaxDistMulti = 0.00f;
    this->CameraDepthMinDistMulti = 0.00f;
}

