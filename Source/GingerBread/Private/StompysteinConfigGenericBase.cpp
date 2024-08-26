#include "StompysteinConfigGenericBase.h"

UStompysteinConfigGenericBase::UStompysteinConfigGenericBase() {
    this->BaseEyeHeight = 5.00f;
    this->BaseEyeXDistance = 0.00f;
    this->BaseEyeYDistance = 0.00f;
    this->PropagateDistance = 100.00f;
    this->HitFlashCurve = NULL;
    this->AttackFlashEnabled = false;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Boss;
    this->NumHitPointsThresholds = 2;
    this->IsCameraRelevantCooldown = 5.00f;
}


