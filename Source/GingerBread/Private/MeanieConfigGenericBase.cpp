#include "MeanieConfigGenericBase.h"

UMeanieConfigGenericBase::UMeanieConfigGenericBase() {
    this->MaxWalkSpeed = 20.00f;
    this->RotationRate = 270.00f;
    this->BaseEyeHeight = 5.00f;
    this->BaseEyeXDistance = 0.00f;
    this->BaseEyeYDistance = 0.00f;
    this->PropagateDistance = 100.00f;
    this->MaximumHitPoints = 8;
    this->DefaultHitPoints = 8;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Enemy;
    this->DelayBeforeVulnerable = 0.00f;
    this->OnFloorDuration = 2.50f;
}


