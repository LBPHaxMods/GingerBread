#include "SniperConfigGenericBase.h"

USniperConfigGenericBase::USniperConfigGenericBase() {
    this->MaxWalkSpeed = 38.00f;
    this->MaxAcceleration = 50.00f;
    this->BaseEyeHeight = 2.10f;
    this->BaseEyeXDistance = 2.80f;
    this->BaseEyeYDistance = 0.00f;
    this->PropagateDistance = 100.00f;
    this->HitFlashCurve = NULL;
    this->MaximumHitPoints = 4;
    this->DefaultHitPoints = 4;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Enemy;
    this->ClampYaw = true;
    this->ClampYawAngle = 40.00f;
    this->MinAngleForTurn = 50.00f;
    this->TurnSpeed = 250.00f;
    this->TotalFlippedTime = 2.00f;
    this->RecoveryPreLogicalFlip = 0.75f;
    this->RecoveryPostLogicalFlip = 0.20f;
    this->DazeVFX = NULL;
    this->TriggerDazeDelay = 0.45f;
    this->DazeAttachSocketName = TEXT("head_1");
    this->ThrownShockWaveScale = 1.10f;
    this->IsCameraRelevantCooldown = 5.00f;
}


