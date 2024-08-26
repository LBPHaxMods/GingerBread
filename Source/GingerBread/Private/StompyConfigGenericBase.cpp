#include "StompyConfigGenericBase.h"

UStompyConfigGenericBase::UStompyConfigGenericBase() {
    this->EyesHeader = TEXT("_________________________________________________________Eyes_________________________________________________________");
    this->BaseEyeHeight = 5.00f;
    this->BaseEyeXDistance = 0.00f;
    this->BaseEyeYDistance = 0.00f;
    this->AlertHeader = TEXT("_________________________________________________________Alert_________________________________________________________");
    this->PropagateDistance = 100.00f;
    this->HitFlashHeader = TEXT("_________________________________________________________HitFlash_________________________________________________________");
    this->HitFlashCurve = NULL;
    this->HitReactionHeader = TEXT("_________________________________________________________HitReaction_________________________________________________________");
    this->HitPointsHeader = TEXT("_________________________________________________________HitPoints_________________________________________________________");
    this->MaximumHitPoints = 4;
    this->DefaultHitPoints = 4;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Enemy;
    this->IdleHeader = TEXT("_________________________________________________________Idle_________________________________________________________");
    this->IdlePatrolSpeed = 12.00f;
    this->IdleReturnHomeSpeed = 12.00f;
    this->IdleRotationSpeed = 360.00f;
    this->IdleAcceleration = 200.00f;
    this->FlippedHeader = TEXT("_________________________________________________________Flipped_________________________________________________________");
    this->TotalFlippedTime = 5.00f;
    this->CameraHeader = TEXT("_________________________________________________________Camera_________________________________________________________");
    this->IsCameraRelevantCooldown = 5.00f;
}


