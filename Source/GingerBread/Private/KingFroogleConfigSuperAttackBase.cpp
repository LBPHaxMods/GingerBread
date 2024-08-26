#include "KingFroogleConfigSuperAttackBase.h"

UKingFroogleConfigSuperAttackBase::UKingFroogleConfigSuperAttackBase() {
    this->MinimumSeparation = 24.00f;
    this->TimeBetweenFalls = 0.75f;
    this->MaximumTimeToWaitForFrooglesToDie = 5.00f;
    this->NumOfFrooglesPerWave.AddDefaulted(2);
    this->NumOfFrooglesPerWaveEmpty = false;
    this->SuperAttackPreJumpTime = 0.18f;
    this->SuperAttackJumpingTime = 0.40f;
    this->SuperAttackHoverTime = 1.80f;
    this->SuperAttackFallingTime = 0.20f;
    this->SuperAttackGroundedTime = 0.00f;
    this->SuperAttackRecoveryTime = 0.60f;
    this->SuperAttackJumpHeight = 100.00f;
    this->SuperAttackFallShadowScaleAtMaxHeight = 15.00f;
    this->SuperAttackFallShadowScaleAtFloor = 40.00f;
    this->SuperAttackFallShadowBlurAtMaxHeight = 3.00f;
    this->SuperAttackFallShadowBlurAtFloor = 0.00f;
    this->SuperAttackSquashDamageModificationAmount = 1;
}


