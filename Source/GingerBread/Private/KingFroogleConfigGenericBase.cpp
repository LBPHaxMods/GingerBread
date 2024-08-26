#include "KingFroogleConfigGenericBase.h"

UKingFroogleConfigGenericBase::UKingFroogleConfigGenericBase() {
    this->BaseEyeHeight = 5.00f;
    this->BaseEyeXDistance = 0.00f;
    this->BaseEyeYDistance = 0.00f;
    this->PropagateDistance = 100.00f;
    this->HitFlashCurve = NULL;
    this->HitReactionBackwardsMoveSpeed = 22.40f;
    this->HitReactionRotationSpeed = 280.00f;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Boss;
    this->NumHitPointsThresholds = 2;
    this->IsCameraRelevantCooldown = 5.00f;
}


