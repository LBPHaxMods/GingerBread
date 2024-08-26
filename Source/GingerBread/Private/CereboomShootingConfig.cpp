#include "CereboomShootingConfig.h"

UCereboomShootingConfig::UCereboomShootingConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SprayAttackRotationSpeed = 30.00f;
    this->SprayAttackRate = 0.25f;
    this->SprayAngle = 60.00f;
    this->SprayAttackMaxProjectiles = 10;
    this->SprayAttackCooldown = 3.00f;
    this->bUseUniformSpray = true;
    this->ChainAttackRate = 0.50f;
    this->ChainMaxProjectiles = 2;
    this->ChainAttackCooldown = 3.00f;
}


