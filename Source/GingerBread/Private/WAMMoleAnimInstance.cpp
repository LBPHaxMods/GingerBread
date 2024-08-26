#include "WAMMoleAnimInstance.h"

UWAMMoleAnimInstance::UWAMMoleAnimInstance() {
    this->SlapMontage = NULL;
    this->StompMontage = NULL;
    this->StealPrizeMontage = NULL;
    this->SurpriseMontage = NULL;
    this->PresentPrizeHitReactMontage = NULL;
    this->CurrentState = EWAMMoleState::Disabled;
    this->bIdle = false;
    this->bBurrow = false;
    this->bEmerge = false;
    this->bUnderground = false;
    this->bCelebrate = false;
    this->bWorship = false;
    this->bPresentPrize = false;
    this->bStealPrize = false;
    this->bSurprised = false;
    this->bBurrowFaster = false;
    this->AimSpaceYaw = 0.00f;
    this->AimSpacePitch = 0.00f;
}

void UWAMMoleAnimInstance::OnSurprisedMontageFinished(UAnimMontage* Montage, bool interrupted) {
}

void UWAMMoleAnimInstance::OnStompedMontageFinished(UAnimMontage* Montage, bool interrupted) {
}

void UWAMMoleAnimInstance::OnStealPrizeMontageFinished(UAnimMontage* Montage, bool interrupted) {
}

void UWAMMoleAnimInstance::OnSlappedMontageFinished(UAnimMontage* Montage, bool interrupted) {
}


