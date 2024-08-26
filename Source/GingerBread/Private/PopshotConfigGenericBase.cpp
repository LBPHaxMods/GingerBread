#include "PopshotConfigGenericBase.h"

UPopshotConfigGenericBase::UPopshotConfigGenericBase() {
    this->MaxWalkSpeed = 40.00f;
    this->EyesHeader = TEXT("_________________________________________________________Eyes_________________________________________________________");
    this->BaseEyeHeight = 2.30f;
    this->BaseEyeXDistance = 2.50f;
    this->BaseEyeYDistance = 0.00f;
    this->AlertHeader = TEXT("_________________________________________________________Alert_________________________________________________________");
    this->PropagateDistance = 100.00f;
    this->HitFlashHeader = TEXT("_________________________________________________________HitFlash_________________________________________________________");
    this->HitFlashCurve = NULL;
    this->HitReactionHeader = TEXT("_________________________________________________________HitReaction_________________________________________________________");
    this->HitPointsHeader = TEXT("_________________________________________________________HitPoints_________________________________________________________");
    this->MaximumHitPoints = 1;
    this->DefaultHitPoints = 1;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Enemy;
    this->VulnerabilityHeader = TEXT("_________________________________________________________Vulnerability_________________________________________________________");
    this->FrontVulnerabilityDotThreshold = 0.60f;
    this->BodyGrappleAngleLimit = 120.00f;
    this->MaxCowerAnimPlayRate = 1.00f;
    this->MinCowerAnimPlayRate = 0.40f;
    this->MaxCowerAnimPlayRateDistance = 15.00f;
    this->MinCowerAnimPlayRateDistance = 5.00f;
    this->WiggleSpeedAcceleration = 5.00f;
    this->IsCameraRelevantCooldown = 5.00f;
}


