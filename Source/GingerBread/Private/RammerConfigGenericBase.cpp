#include "RammerConfigGenericBase.h"

URammerConfigGenericBase::URammerConfigGenericBase() {
    this->BaseEyeHeight = 2.00f;
    this->BaseEyeXDistance = 2.50f;
    this->BaseEyeYDistance = 0.00f;
    this->PropagateDistance = 80.00f;
    this->HitFlashCurve = NULL;
    this->HitPointsHeader = TEXT("_________________________________________________________HitPoints_________________________________________________________");
    this->MaximumHitPoints = 4;
    this->DefaultHitPoints = 4;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Enemy;
    this->IdleHeader = TEXT("_________________________________________________________Idle_________________________________________________________");
    this->IdlePatrolSpeed = 6.00f;
    this->IdleReturnHomeSpeed = 6.00f;
    this->IdleRotationSpeed = 120.00f;
    this->IdleAcceleration = 200.00f;
    this->ThrownHeader = TEXT("_________________________________________________________Thrown_________________________________________________________");
    this->ThrownVFXScale = 1.10f;
    this->FlippedHeader = TEXT("_________________________________________________________Flipped_________________________________________________________");
    this->TotalFlippedTime = 2.40f;
    this->RecoveryPreLogicalFlip = 0.50f;
    this->RecoveryPostLogicalFlip = 0.70f;
    this->RecoveryMoveDistance = 9.00f;
    this->RecoveryMoveStartDelay = 0.38f;
    this->RecoveryMoveDuration = 0.34f;
    this->RecoveryMoveAcceleration = 2048.00f;
    this->DazeHeader = TEXT("_________________________________________________________Daze_________________________________________________________");
    this->DazeVFX = NULL;
    this->TriggerDazeDelay = 0.35f;
    this->DazeAttachSocketName = TEXT("Root");
    this->ClampYaw = false;
    this->ClampYawAngle = 0.00f;
    this->IsCameraRelevantCooldown = 5.00f;
}


