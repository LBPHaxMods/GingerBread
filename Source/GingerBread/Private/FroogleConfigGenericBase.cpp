#include "FroogleConfigGenericBase.h"

UFroogleConfigGenericBase::UFroogleConfigGenericBase() {
    this->BaseEyeHeight = 2.25f;
    this->BaseEyeXDistance = 2.50f;
    this->BaseEyeYDistance = 0.00f;
    this->PropagateDistance = 80.00f;
    this->HitFlashCurve = NULL;
    this->MaximumHitPoints = 4;
    this->DefaultHitPoints = 4;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Enemy;
    this->IdlePatrolSpeed = 7.00f;
    this->IdleReturnHomeSpeed = 7.00f;
    this->IdleRotationSpeed = 150.00f;
    this->IdleAcceleration = 200.00f;
    this->AlertRotationSpeed = 630.00f;
    this->ClampYaw = false;
    this->ClampYawAngle = 0.00f;
    this->TotalFlippedTime = 2.00f;
    this->RecoveryPreLogicalFlip = 0.30f;
    this->RecoveryPostLogicalFlip = 0.50f;
    this->DazeVFX = NULL;
    this->TriggerDazeDelay = 0.45f;
    this->ThrownShockWaveScale = 1.10f;
    this->IsCameraRelevantCooldown = 5.00f;
}


