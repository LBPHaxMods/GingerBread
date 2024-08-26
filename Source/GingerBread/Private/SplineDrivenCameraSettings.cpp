#include "SplineDrivenCameraSettings.h"

FSplineDrivenCameraSettings::FSplineDrivenCameraSettings() {
    this->SplineActor = NULL;
    this->PositionDrivingMode = ESplinePositionDrivingMode::SackboyDriven;
    this->SackboyDrivenTargetMode = ESackboyDrivenTargetMode::AllPointsOfInterest;
    this->SplineRotationMode = ESplineRotationMode::WorldSpace;
    this->SplineMotionMode = ESplineMotionMode::LockToSpline;
    this->bUseSplineFocusPoint = false;
    this->bSnapToSpawnPointOnSpawn = false;
    this->ConstantSpeedSpawnDelay = 0.00f;
    this->bRequiresAliveSackboys = false;
    this->CameraSettingsMode = EDriveCameraSettingsMode::DefaultCameraSettings;
}

