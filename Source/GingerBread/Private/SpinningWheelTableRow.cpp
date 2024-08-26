#include "SpinningWheelTableRow.h"

FSpinningWheelTableRow::FSpinningWheelTableRow() {
    this->Radius = 0.00f;
    this->RotationSpeed = 0.00f;
    this->SurfaceRepelImpulse = 0.00f;
    this->ReleaseNormalImpulse = 0.00f;
    this->ReleaseVelocityImpulse = 0.00f;
    this->ReleaseLiftImpulseMin = 0.00f;
    this->ReleaseLiftImpulseMax = 0.00f;
    this->JumpNormalImpulse = 0.00f;
    this->JumpVelocityImpulse = 0.00f;
    this->JumpLiftImpulseMin = 0.00f;
    this->JumpLiftImpulseMax = 0.00f;
    this->LiftAngleMin = 0.00f;
    this->LiftAngleMax = 0.00f;
    this->DistanceBetweenGrabPointsCircumference = 0.00f;
    this->DistanceBetweenGrabPointsLength = 0.00f;
    this->AudioStartEvent = NULL;
    this->AudioStopEvent = NULL;
    this->HapticStartGrabEvent = NULL;
    this->HapticStopGrabEvent = NULL;
}

