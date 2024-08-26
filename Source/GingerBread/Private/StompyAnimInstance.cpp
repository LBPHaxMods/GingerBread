#include "StompyAnimInstance.h"

UStompyAnimInstance::UStompyAnimInstance() {
    this->GenericState = EStompyGenericState::Invalid;
    this->StompState = EStompyStompState::Invalid;
    this->DroppedState = EAIDroppedState::Invalid;
    this->SlideState = EAISlideState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterIdleToAlertState = false;
    this->EnterAlertToIdleState = false;
    this->EnterMovementState = false;
    this->ExitMovementState = false;
    this->EnterStompState = false;
    this->ExitStompState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterTakeHitLandState = false;
    this->EnterFlippedState = false;
    this->ExitFlippedState = false;
    this->EnterCarriedState = false;
    this->ExitCarriedState = false;
    this->EnterThrownState = false;
    this->ExitThrownState = false;
    this->EnterDeathState = false;
    this->EnterFlippedRecoveryState = false;
    this->EnterThrownLandState = false;
    this->EnterThrownRecoveryState = false;
    this->EnterBubbleState = false;
    this->ExitBubbleState = false;
    this->EnterDroppedState = false;
    this->ExitDroppedState = false;
    this->EnterSlidingState = false;
    this->ExitSlidingState = false;
    this->EnterCelebrateState = false;
    this->ExitCelebrateState = false;
    this->EnterTauntState = false;
    this->ExitTauntState = false;
    this->IsAlert = false;
    this->HasPatrolObject = false;
    this->SpinBlendspacePercentage = 0.00f;
    this->SpinBlendspaceFiltered = 0.00f;
    this->SpinBlendspaceCurve = NULL;
    this->SpinLeanPitch = 0.00f;
    this->SpinLeanRoll = 0.00f;
    this->SpinPitchMaxLeanAmount = 70.00f;
    this->SpinMinSineChangePerFrame = 2.00f;
    this->SpinMaxSineChangePerFrame = 4.50f;
    this->SpinRollMaxLeanAmount = 100.00f;
    this->SpinMinRollRandMultiplier = 1.00f;
    this->SpinMaxRollRandMultiplier = 1.40f;
    this->LookAtPitch = 0.00f;
    this->LookAtYaw = 0.00f;
    this->BoneLookAtPitch = 0.00f;
    this->BoneLookAtYaw = 0.00f;
}

void UStompyAnimInstance::ChangeState(EStompyGenericState NewState) {
}


