#include "MinibossMeanieConfigGenericBase.h"

UMinibossMeanieConfigGenericBase::UMinibossMeanieConfigGenericBase() {
    this->MinSpeedForVFXTrail = 1.00f;
    this->BaseEyeHeight = 5.00f;
    this->BaseEyeXDistance = 0.00f;
    this->BaseEyeYDistance = 0.00f;
    this->PropagateDistance = 100.00f;
    this->HitFlashCurve = NULL;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Boss;
    this->NumHitPointsThresholds = 3;
    this->NumOfGruntysPerWave.AddDefaulted(3);
    this->NumOfGruntysPerWaveEmpty = false;
    this->DelayBeforeVulnerable = 0.00f;
    this->OnFloorDuration = 1.00f;
    this->MinRadiusFromCentreToAimGrunty = 15.00f;
    this->MaxRadiusFromCentreToAimGrunty = 35.00f;
    this->GruntyAimAngleArc = 270.00f;
    this->IsCameraRelevantCooldown = 5.00f;
}


