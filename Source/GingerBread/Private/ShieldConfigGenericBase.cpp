#include "ShieldConfigGenericBase.h"

UShieldConfigGenericBase::UShieldConfigGenericBase() {
    this->MaxWalkSpeed = 25.00f;
    this->RotationRate = 80.00f;
    this->BaseEyeHeight = 5.00f;
    this->BaseEyeXDistance = 0.00f;
    this->BaseEyeYDistance = 0.00f;
    this->PropagateDistance = 100.00f;
    this->MaximumHitPoints = 1;
    this->DefaultHitPoints = 1;
    this->DamageCooldown = 0.20f;
    this->HitPointsSource = EDamageSource::Enemy;
    this->MaxAcceptDistFromHome = 5.00f;
    this->ReturnHomeSpeed = 25.00f;
    this->ReturnHomeRotationSpeed = 360.00f;
}


