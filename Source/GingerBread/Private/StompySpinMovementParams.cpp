#include "StompySpinMovementParams.h"

FStompySpinMovementParams::FStompySpinMovementParams() {
    this->ChaseSpeed = 0.00f;
    this->ChaseDirectionInterpolationSpeed = 0.00f;
    this->ChaseAcceleration = 0.00f;
    this->ChaseDeceleration = 0.00f;
    this->NavigationFilterClass = NULL;
    this->RicochetSpeed = 0.00f;
    this->RicochetTime = 0.00f;
}

