#include "TransitionSettings.h"

FTransitionSettings::FTransitionSettings() {
    this->MaximumVelocity = 0.00f;
    this->MaximumAcceleration = 0.00f;
    this->MaximumRotationSpeed = 0.00f;
    this->MaximumRotationAcceleration = 0.00f;
    this->MaximumFieldOfViewSpeed = 0.00f;
    this->MaximumFieldOfViewAcceleration = 0.00f;
    this->UseFixedTransitionTime = false;
    this->FixedTransitionTime = 0.00f;
    this->KeepSettingsOnOut = false;
    this->UseUnconstrainedDelta = false;
}

