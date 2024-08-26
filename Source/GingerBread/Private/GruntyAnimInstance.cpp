#include "GruntyAnimInstance.h"

UGruntyAnimInstance::UGruntyAnimInstance() {
    this->GenericState = EGruntyGenericState::Invalid;
    this->TurnOnSpotState = EGruntyTurnOnSpotState::Invalid;
    this->StackState = EGruntyStackAnimationState::Invalid;
    this->TimberState = EGruntyTimberState::Invalid;
    this->LaunchAttackState = EGruntyLaunchAttackState::Invalid;
    this->ThrownState = EGruntyThrownState::Invalid;
    this->FlippedState = EGruntyFlippedState::Invalid;
    this->DroppedState = EAIDroppedState::Invalid;
    this->SlideState = EAISlideState::Invalid;
    this->AdditiveState = EGruntyAdditiveState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterTurnOnSpotState = false;
    this->ExitTurnOnSpotState = false;
    this->EnterConfusedState = false;
    this->ExitConfusedState = false;
    this->EnterAttackState = false;
    this->ExitAttackState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterCarriedState = false;
    this->ExitCarriedState = false;
    this->EnterThrownState = false;
    this->ExitThrownState = false;
    this->EnterFlippedState = false;
    this->ExitFlippedState = false;
    this->EnterMovementState = false;
    this->ExitMovementState = false;
    this->EnterDeathState = false;
    this->EnterBubbleState = false;
    this->ExitBubbleState = false;
    this->EnterStackState = false;
    this->ExitStackState = false;
    this->EnterTimberState = false;
    this->ExitTimberState = false;
    this->EnterStackLaunchState = false;
    this->ExitStackLaunchState = false;
    this->EnterDroppedState = false;
    this->ExitDroppedState = false;
    this->EnterShieldBashState = false;
    this->ExitShieldBashState = false;
    this->EnterCelebrateState = false;
    this->ExitCelebrateState = false;
    this->EnterTauntState = false;
    this->ExitTauntState = false;
    this->EnterSlidingState = false;
    this->ExitSlidingState = false;
    this->EnterIdleToAlertState = false;
    this->EnterAlertToIdleState = false;
    this->EnterWalkToIdleState = false;
    this->IsAlert = false;
    this->RotationalDelta = 0.00f;
    this->LookAtPitch = 0.00f;
    this->LookAtYaw = 0.00f;
    this->BoneLookAtPitch = 0.00f;
    this->BoneLookAtYaw = 0.00f;
    this->AdditiveOutBlendTime = 0.20f;
    this->IsStacked = false;
    this->IsHoldingShield = false;
    this->StackPosition = EGruntyStackPosition::Invalid;
    this->AdditiveBlendWeight = 0.00f;
}

void UGruntyAnimInstance::PlayAdditiveAnimation(EGruntyAdditiveState Additive) {
}

void UGruntyAnimInstance::ChangeState(EGruntyGenericState NewState) {
}


