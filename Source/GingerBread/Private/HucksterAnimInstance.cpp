#include "HucksterAnimInstance.h"

UHucksterAnimInstance::UHucksterAnimInstance() {
    this->GenericState = EHucksterGenericState::Invalid;
    this->NextState = EHucksterGenericState::Invalid;
    this->AttackState = EHucksterAttackState::Invalid;
    this->DiggingState = EHucksterDiggingState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterCelebrationState = false;
    this->ExitCelebrationState = false;
    this->EnterAlertState = false;
    this->ExitAlertState = false;
    this->EnterDeathState = false;
    this->EnterAttackState = false;
    this->ExitAttackState = false;
    this->EnterDiggingState = false;
    this->ExitDiggingState = false;
    this->EnterLostTargetState = false;
    this->ExitLostTargetState = false;
    this->EnterWatchingState = false;
    this->ExitWatchingState = false;
}

void UHucksterAnimInstance::SetState(EHucksterGenericState State) {
}

void UHucksterAnimInstance::OnStateChanged(EHucksterGenericState OldState) {
}


