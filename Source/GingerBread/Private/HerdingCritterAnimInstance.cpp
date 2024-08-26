#include "HerdingCritterAnimInstance.h"

UHerdingCritterAnimInstance::UHerdingCritterAnimInstance() {
    this->FastTurnLeftMontage = NULL;
    this->FastTurnRightMontage = NULL;
    this->StompMontage = NULL;
    this->HitMontage = NULL;
    this->Idle = true;
    this->IdleWalk = false;
    this->alert = false;
    this->Fleeing = false;
    this->Escaped = false;
    this->FleeRunning = false;
    this->FleeCornered = false;
    this->FleeJumping = false;
    this->FleePickedUp = false;
    this->FleeThrown = false;
    this->LocomotionSpeed = 0.00f;
}

void UHerdingCritterAnimInstance::OnStompMontageFinished(UAnimMontage* Montage, bool interrupted) {
}

void UHerdingCritterAnimInstance::OnHitMontageFinished(UAnimMontage* Montage, bool interrupted) {
}

void UHerdingCritterAnimInstance::OnFastTurnMontageFinished(UAnimMontage* Montage, bool interrupted) {
}


