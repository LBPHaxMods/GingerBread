#include "ShootingParameters.h"

UShootingParameters::UShootingParameters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FireDelay = 1.00f;
    this->ProjectileSpeed = 100.00f;
    this->MinShootDistance = 15.00f;
    this->MaxShootDistance = 100.00f;
    this->ProjectileClass = NULL;
}


