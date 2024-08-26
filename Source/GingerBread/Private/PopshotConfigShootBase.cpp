#include "PopshotConfigShootBase.h"

UPopshotConfigShootBase::UPopshotConfigShootBase() {
    this->GravityScale = 0.50f;
    this->ShotArc = 0.50f;
    this->InitialProjectileRotationRate = 270.00f;
    this->ShootCooldownTime = 2.32f;
    this->ShotBounceParams.AddDefaulted(4);
    this->MaxPredictionAngleDeviation = 30.00f;
    this->PredictionProjectileSpeedEstimate = 95.00f;
    this->KnockbackDistance = 12.00f;
    this->KnockbackMaxSpeed = 60.00f;
    this->KnockbackRotationSpeed = 360.00f;
    this->RecoveryDelay = 0.50f;
    this->HitWallRecoveryTime = 0.50f;
}


