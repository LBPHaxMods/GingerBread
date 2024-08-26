#include "GruntyConfigGenericBase.h"

UGruntyConfigGenericBase::UGruntyConfigGenericBase() {
    this->BaseEyeHeight = 1.80f;
    this->BaseEyeXDistance = 0.75f;
    this->BaseEyeYDistance = 0.00f;
    this->PropagateDistance = 40.00f;
    this->HitFlashCurve = NULL;
    this->MaximumHitPoints = 1;
    this->DefaultHitPoints = 1;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Enemy;
    this->IdlePatrolSpeed = 14.00f;
    this->IdleReturnHomeSpeed = 14.00f;
    this->IdleRotationSpeed = 360.00f;
    this->IdleAcceleration = 200.00f;
    this->TotalFlippedTime = 2.50f;
    this->RecoveryPreLogicalFlip = 0.40f;
    this->RecoveryPostLogicalFlip = 0.40f;
    this->DazeVFX = NULL;
    this->TriggerDazeDelay = 0.30f;
    this->ThrownShockWaveScale = 1.10f;
    this->AvoidanceEnabled = true;
    this->AvoidanceDistance = 15.00f;
    this->AvoidanceWeight = 0.25f;
    this->SpeedLimitDelta = 6.00f;
    this->LimitInterpolationSpeed = 3.00f;
    this->IsCameraRelevantCooldown = 5.00f;
}


