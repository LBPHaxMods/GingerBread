#include "MinibossMeanieConfigSlamBase.h"

UMinibossMeanieConfigSlamBase::UMinibossMeanieConfigSlamBase() {
    this->SlamCompleteTime = 2.40f;
    this->SlamDamageDelay = 1.00f;
    this->SlamDamageDuration = 0.25f;
    this->SlamStopMovementDelay = 0.95f;
    this->SlamStopMovementDuration = 2.20f;
    this->MaxRangeToStartSlamAttack = 35.00f;
    this->MaxRangeDuringSlamAttack = 30.00f;
    this->PreferredRangeDuringSlamAttack = 25.00f;
    this->MaxAngleToStartSlamAttack = 30.00f;
    this->MaxAngleDuringSlamAttack = 10.00f;
    this->SlamCooldownTime = 1.00f;
    this->SlamReturnSignpostTime = 1.50f;
    this->SlamHitPauseDuration = 0.80f;
}


