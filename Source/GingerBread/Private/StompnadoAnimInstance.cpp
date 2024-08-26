#include "StompnadoAnimInstance.h"

UStompnadoAnimInstance::UStompnadoAnimInstance() {
    this->GenericState = EStompnadoGenericState::Invalid;
    this->SpinState = EStompnadoSpinState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterMovementState = false;
    this->ExitMovementState = false;
    this->EnterSpinState = false;
    this->ExitSpinState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterVulnerableState = false;
    this->ExitVulnerableState = false;
    this->EnterCarriedState = false;
    this->ExitCarriedState = false;
    this->EnterThrownState = false;
    this->ExitThrownState = false;
    this->EnterDeathState = false;
    this->EnterVulnerableRecoveryState = false;
    this->SkipVulnerableInto = false;
    this->EnterThrownLandState = false;
    this->EnterThrownRecoveryState = false;
    this->IsAlert = false;
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
}

void UStompnadoAnimInstance::ChangeState(EStompnadoGenericState NewState) {
}


