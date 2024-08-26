#include "UnderminerAnimInstance.h"

UUnderminerAnimInstance::UUnderminerAnimInstance() {
    this->GenericState = EUnderminerGenericState::Invalid;
    this->CapsuleComponent = NULL;
    this->LookAtComponent = NULL;
    this->AlertComponent = NULL;
}

void UUnderminerAnimInstance::ChangeState(EUnderminerGenericState NewState) {
}


