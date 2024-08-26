#include "SpaceHamsterAnimInstance.h"

USpaceHamsterAnimInstance::USpaceHamsterAnimInstance() {
    this->GenericState = ESpaceHamsterGenericState::Invalid;
    this->ActualSpeed = 0.00f;
    this->DegreesOffDesiredAngle = 0.00f;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterMovingState = false;
    this->ExitMovingState = false;
    this->EnterSkidStopState = false;
    this->ExitSkidStopState = false;
    this->EnterStaticWindupState = false;
    this->ExitStaticWindupState = false;
    this->EnterDeathState = false;
    this->ExitFlipLoop = false;
}

void USpaceHamsterAnimInstance::ChangeState(ESpaceHamsterGenericState NewState) {
}


