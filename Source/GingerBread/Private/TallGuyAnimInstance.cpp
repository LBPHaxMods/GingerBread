#include "TallGuyAnimInstance.h"

UTallGuyAnimInstance::UTallGuyAnimInstance() {
    this->GenericState = ETallGuyGenericState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterMovementState = false;
    this->ExitMovementState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterThrownBackState = false;
    this->ExitThrownBackState = false;
    this->EnterDeathState = false;
    this->ThrowState = ETallGuyThrowState::Invalid;
    this->EnterThrowPreparation = false;
    this->ExitThrowPreparation = false;
    this->EnterThrowThrowing = false;
    this->ExitThrowThrowing = false;
    this->ThrowBlendWeight = 0.00f;
    this->AmIAlerted = false;
    this->DegreesOffDesiredAngle = 0.00f;
}

void UTallGuyAnimInstance::ChangeThrowState(ETallGuyThrowState NewState) {
}

void UTallGuyAnimInstance::ChangeState(ETallGuyGenericState NewState) {
}


