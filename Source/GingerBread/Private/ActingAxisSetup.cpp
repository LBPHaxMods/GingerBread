#include "ActingAxisSetup.h"

FActingAxisSetup::FActingAxisSetup() {
    this->TiltAxis = EActingControllerRotationAxis::XAxis;
    this->AccelerationAxis = EActingControllerRotationAxis::XAxis;
    this->ZeroPoint = 0.00f;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->TiltSensitivity = 0.00f;
    this->AccelerationSensitivity = 0.00f;
}

