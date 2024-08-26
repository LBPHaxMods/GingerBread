#include "MinibossMeanieAnimInstance.h"

UMinibossMeanieAnimInstance::UMinibossMeanieAnimInstance() {
    this->GenericState = EMinibossMeanieGenericState::Invalid;
    this->MovementState = EMinibossMeanieMovementState::Invalid;
    this->HitState = EMinibossMeanieHitState::Invalid;
    this->SpinAndShootState = EMinibossMeanieSpinAndShootState::Invalid;
    this->AdditiveState = EMinibossMeanieAdditiveState::Invalid;
    this->AlertState = EAlertState::Idle;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterTauntState = false;
    this->ExitTauntState = false;
    this->EnterMovementState = false;
    this->ExitMovementState = false;
    this->EnterSlamSignpostState = false;
    this->ExitSlamSignpostState = false;
    this->EnterSlamAttackState = false;
    this->ExitSlamAttackState = false;
    this->IsDoingRightSlamAttack = false;
    this->EnterSpinAndShootState = false;
    this->ExitSpinAndShootState = false;
    this->EnterBombPopState = false;
    this->ExitBombPopState = false;
    this->EnterFlippedState = false;
    this->ExitFlippedState = false;
    this->EnterFlippedRecoveryState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterPunchSignpostState = false;
    this->ExitPunchSignpostState = false;
    this->EnterDeathState = false;
    this->EnterBubbleState = false;
    this->ExitBubbleState = false;
    this->RunThreshold = 5.00f;
    this->AdditiveOutBlendTime = 0.20f;
    this->SlamAttackMovementSpeed = 0.00f;
    this->SlamAttackPlayRate = 1.00f;
    this->RotationalDelta = 0.00f;
    this->EnterAdditiveHitReaction = false;
    this->AdditiveBlendWeight = 0.00f;
}

void UMinibossMeanieAnimInstance::PlayAdditiveAnimation(EMinibossMeanieAdditiveState AdditiveAnim) {
}

void UMinibossMeanieAnimInstance::ChangeState(EMinibossMeanieGenericState NewState) {
}


