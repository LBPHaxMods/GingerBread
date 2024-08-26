#include "PongerAnimInstance.h"

UPongerAnimInstance::UPongerAnimInstance() {
    this->EnterIdle = false;
    this->ExitIdle = false;
    this->EnterThrown = false;
    this->ExitThrown = false;
    this->EnterHitReact = false;
    this->ExitHitReact = false;
    this->EnterSlapped = false;
    this->ExitSlapped = false;
    this->EnterTraversalStart = false;
    this->ExitTraversalStart = false;
    this->EnterTraversalStop = false;
    this->ExitTraversalStop = false;
    this->EnterMoving = false;
    this->ExitMoving = false;
    this->EnterPicked = false;
    this->ExitPicked = false;
    this->PongerRotation = 0.00f;
}

void UPongerAnimInstance::UpdatePropellerRotationNotMoving() {
}

void UPongerAnimInstance::UpdatePropellerRotationMoving() {
}


