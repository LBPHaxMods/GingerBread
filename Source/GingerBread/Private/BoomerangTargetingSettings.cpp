#include "BoomerangTargetingSettings.h"

FBoomerangTargetingSettings::FBoomerangTargetingSettings() {
    this->TargetingMaxDistance = 0.00f;
    this->TargetingMaxAngle = 0.00f;
    this->TargetingMaxHeight = 0.00f;
    this->TargetingMinHeight = 0.00f;
    this->TargetingForwardOffset = 0.00f;
    this->TargetingExclusionDistance = 0.00f;
    this->TargetingDistanceCurve = NULL;
    this->TargetingAngleCurve = NULL;
}

