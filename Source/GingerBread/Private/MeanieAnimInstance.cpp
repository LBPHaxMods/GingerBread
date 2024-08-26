#include "MeanieAnimInstance.h"

UMeanieAnimInstance::UMeanieAnimInstance() {
    this->GenericState = EMeanieGenericState::Invalid;
    this->MovementState = EMeanieMovementState::Invalid;
    this->AttackState = EMeanieAttackState::Invalid;
    this->HitState = EMeanieHitState::Invalid;
    this->AlertState = EAlertState::Idle;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterTauntState = false;
    this->ExitTauntState = false;
    this->EnterMovementState = false;
    this->ExitMovementState = false;
    this->EnterAttackState = false;
    this->ExitAttackState = false;
    this->EnterFlippedState = false;
    this->ExitFlippedState = false;
    this->EnterFlippedRecoveryState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterDeathState = false;
    this->EnterBubbleState = false;
    this->ExitBubbleState = false;
    this->RunThreshold = 5.00f;
}

void UMeanieAnimInstance::ChangeState(EMeanieGenericState NewState) {
}


