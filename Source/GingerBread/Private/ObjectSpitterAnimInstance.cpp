#include "ObjectSpitterAnimInstance.h"

UObjectSpitterAnimInstance::UObjectSpitterAnimInstance() {
    this->State = EObjectSpitterAnimState::Idle;
    this->EnterIdle = false;
    this->EnterSwallowing = false;
    this->EnterSpitting = false;
}


