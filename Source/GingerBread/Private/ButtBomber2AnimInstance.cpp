#include "ButtBomber2AnimInstance.h"

UButtBomber2AnimInstance::UButtBomber2AnimInstance() {
    this->IdleState = EButtBomber2IdleState::Invalid;
    this->StompState = EButtBomber2StompState::Invalid;
    this->StuckState = EButtBomber2StuckState::Invalid;
    this->AlertState = EAlertState::Idle;
    this->GenericState = EButtBomber2GenericState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterStompState = false;
    this->ExitStompState = false;
    this->EnterStuckState = false;
    this->ExitStuckState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterDeathState = false;
    this->LinearSpeed = 0.00f;
    this->CapsuleComponent = NULL;
    this->LookAtComponent = NULL;
    this->AlertComponent = NULL;
}

void UButtBomber2AnimInstance::ChangeState(EButtBomber2GenericState NewState) {
}


