#include "ButtBomberAnimInstance.h"

UButtBomberAnimInstance::UButtBomberAnimInstance() {
    this->GenericState = EButtBomberGenericState::Invalid;
    this->IdleState = EButtBomberIdleState::Invalid;
    this->StompState = EButtBomberStompState::Invalid;
    this->StuckState = EButtBomberStuckState::Invalid;
    this->HitState = EButtBomberHitState::Invalid;
    this->AlertState = EAlertState::Idle;
    this->AdditiveState = EButtBomberAdditiveAnimation::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterStompState = false;
    this->ExitStompState = false;
    this->EnterStuckState = false;
    this->ExitStuckState = false;
    this->EnterDeathState = false;
    this->LinearSpeed = 0.00f;
    this->EnterAdditiveHitReaction = false;
    this->AdditiveBlendWeight = 0.00f;
    this->CapsuleComponent = NULL;
    this->LookAtComponent = NULL;
    this->AlertComponent = NULL;
}

void UButtBomberAnimInstance::PlayAdditiveAnimation(EButtBomberAdditiveAnimation Additive) {
}

void UButtBomberAnimInstance::ChangeState(EButtBomberGenericState NewState) {
}


