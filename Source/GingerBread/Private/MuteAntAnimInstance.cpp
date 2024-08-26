#include "MuteAntAnimInstance.h"

UMuteAntAnimInstance::UMuteAntAnimInstance() {
    this->GenericState = EMuteAntGenericState::Invalid;
    this->StandingState = EMuteAntStandingState::Invalid;
    this->ChargeState = EMuteAntChargeState::Invalid;
    this->ShieldState = EMuteAntShieldState::Invalid;
    this->ThrowingState = EMuteAntThrowingState::Invalid;
    this->AdditiveState = EMuteAntAdditiveState::Invalid;
    this->KnockDownState = EMuteAntKnockDownState::Invalid;
    this->ThrownState = EMuteAntThrownState::Invalid;
    this->AlertState = EAlertState::Idle;
    this->EnterStandingState = false;
    this->ExitStandingState = false;
    this->EnterChargeState = false;
    this->ExitChargeState = false;
    this->EnterBashState = false;
    this->ExitBashState = false;
    this->EnterDislodgeSpearState = false;
    this->ExitDislodgeSpearState = false;
    this->EnterThrowingState = false;
    this->ExitThrowingState = false;
    this->EnterDeathState = false;
    this->ExitDeathState = false;
    this->EnterCelebrationState = false;
    this->ExitCelebrationState = false;
    this->EnterNoticeState = false;
    this->ExitNoticeState = false;
    this->EnterHitState = false;
    this->ExitHitState = false;
    this->EnterVulnerableState = false;
    this->ExitVulnerableState = false;
    this->EnterCarriedState = false;
    this->ExitCarriedState = false;
    this->EnterKnockDownState = false;
    this->ExitKnockDownState = false;
    this->EnterThrownState = false;
    this->ExitThrownState = false;
    this->AdditiveAnimBlend = 0.00f;
    this->RotAngle = 0.00f;
    this->LinearSpeed = 0.00f;
    this->CapsuleComponent = NULL;
    this->AlertComponent = NULL;
}

void UMuteAntAnimInstance::PlayAdditiveAnimation(EMuteAntAdditiveState NewAdditiveState) {
}

void UMuteAntAnimInstance::ChangeState(EMuteAntGenericState NewState) {
}


