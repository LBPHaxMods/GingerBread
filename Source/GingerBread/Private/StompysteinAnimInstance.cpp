#include "StompysteinAnimInstance.h"

UStompysteinAnimInstance::UStompysteinAnimInstance() {
    this->GenericState = EStompysteinGenericState::Invalid;
    this->SpinState = EStompysteinSpinState::Invalid;
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
    this->EnterDeathState = false;
    this->EnterTauntState = false;
    this->ExitTauntState = false;
    this->SkipVulnerableInto = false;
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

void UStompysteinAnimInstance::ChangeState(EStompysteinGenericState NewState) {
}


