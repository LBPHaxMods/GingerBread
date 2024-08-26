#include "CritterCarryAnimInstance.h"

UCritterCarryAnimInstance::UCritterCarryAnimInstance() {
    this->EnterIdle = true;
    this->ExitIdle = false;
    this->EnterCarried = false;
    this->ExitCarried = false;
    this->EnterThrown = false;
    this->ExitThrown = false;
    this->EnterTurningRight = false;
    this->ExitTurningRight = false;
    this->EnterTurningLeft = false;
    this->ExitTurningLeft = false;
}

void UCritterCarryAnimInstance::AnimNotify_TurnRight() {
}

void UCritterCarryAnimInstance::AnimNotify_TurnLeft() {
}


