#include "BabyFroogleAnimInstance.h"

UBabyFroogleAnimInstance::UBabyFroogleAnimInstance() {
    this->IdleLoopMin = 5.00f;
    this->IdleLoopMax = 10.00f;
    this->GenericState = EBabyFroogleGenericState::Invalid;
    this->HopState = EBabyFroogleHopState::Invalid;
    this->StandingState = EBabyFroogleStandingState::Invalid;
    this->HitState = EBabyFroogleHitState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterHopState = false;
    this->ExitHopState = false;
    this->EnterCelebrationState = false;
    this->ExitCelebrationState = false;
    this->EnterHitState = false;
    this->ExitHitState = false;
    this->EnterDeathState = false;
    this->EnterBeingCarriedState = false;
    this->ExitBeingCarriedState = false;
    this->EnterThrownState = false;
    this->ExitThrownState = false;
    this->EnterBubbleState = false;
    this->ExitBubbleState = false;
    this->RotAngle = 0.00f;
    this->EnterAdditiveHitReaction = false;
    this->AdditiveBlendWeight = 0.00f;
    this->CapsuleComponent = NULL;
}

void UBabyFroogleAnimInstance::PlayAdditiveAnimation(EBabyFroogleAdditiveAnimation Additive) {
}

void UBabyFroogleAnimInstance::OnStateChanged(EBabyFroogleGenericState OldState) {
}


