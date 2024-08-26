#include "SpinAttackSettings.h"

FSpinAttackSettings::FSpinAttackSettings() {
    this->TotalSpinAttackTime = 0.00f;
    this->RingMaxHeight = 0.00f;
    this->InnerRingMaxRotationSpeed = 0.00f;
    this->OuterRingMaxRotationSpeed = 0.00f;
    this->InnerRingRotationSpeedCurve = NULL;
    this->OuterRingRotationSpeedCurve = NULL;
    this->InnerRingHeightCurve = NULL;
    this->OuterRingHeightCurve = NULL;
    this->RingsRotateInOppositeDirections = false;
}

