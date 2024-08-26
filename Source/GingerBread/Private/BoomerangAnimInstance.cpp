#include "BoomerangAnimInstance.h"

UBoomerangAnimInstance::UBoomerangAnimInstance() {
    this->AnimState = EBoomerangAnimState::Small;
    this->EnterSmallState = false;
    this->ExitSmallState = false;
    this->EnterLargeState = false;
    this->ExitLargeState = false;
}

void UBoomerangAnimInstance::SetState(EBoomerangAnimState State) {
}


