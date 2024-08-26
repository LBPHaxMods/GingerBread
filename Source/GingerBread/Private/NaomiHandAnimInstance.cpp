#include "NaomiHandAnimInstance.h"

UNaomiHandAnimInstance::UNaomiHandAnimInstance() {
    this->EnterArenaEnterState = false;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterArenaExitState = false;
    this->ExitArenaExitState = false;
    this->EnterPunchState = false;
    this->ExitPunchState = false;
    this->EnterFastPunchState = false;
    this->ExitFastPunchState = false;
    this->EnterChargePunchState = false;
    this->ExitChargePunchState = false;
    this->EnterFaceHitState = false;
    this->ExitFaceHitState = false;
}


