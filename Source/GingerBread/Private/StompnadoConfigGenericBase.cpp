#include "StompnadoConfigGenericBase.h"

UStompnadoConfigGenericBase::UStompnadoConfigGenericBase() {
    this->BaseEyeHeight = 5.00f;
    this->BaseEyeXDistance = 0.00f;
    this->BaseEyeYDistance = 0.00f;
    this->PropagateDistance = 100.00f;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Enemy;
    this->NumHitPointsThresholds = 2;
}


