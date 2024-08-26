#include "FroogleConfigSuperAttackBase.h"

UFroogleConfigSuperAttackBase::UFroogleConfigSuperAttackBase() {
    this->SuperAttackPreJumpTime = 0.00f;
    this->SuperAttackJumpingTime = 0.40f;
    this->SuperAttackHoverTime = 1.10f;
    this->SuperAttackFallingTime = 0.20f;
    this->SuperAttackGroundedTime = 2.00f;
    this->SuperAttackJumpHeight = 100.00f;
    this->SuperAttackFallShadowScaleAtMaxHeight = 4.00f;
    this->SuperAttackFallShadowScaleAtFloor = 12.00f;
    this->SuperAttackFallShadowBlurAtMaxHeight = 5.00f;
    this->SuperAttackFallShadowBlurAtFloor = 0.50f;
    this->SuperAttackAnticipationJumpDistance = 0.00f;
    this->SuperAttackAnticipationPredictAheadSeconds = 0.50f;
    this->SuperAttackAnticipationRotationSpeed = 500.00f;
}


