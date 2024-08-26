#include "BabyProogleAnimInstance.h"

UBabyProogleAnimInstance::UBabyProogleAnimInstance() {
    this->IdleLoopMin = 5.00f;
    this->IdleLoopMax = 10.00f;
    this->GenericState = EBabyProogleGenericState::Invalid;
    this->HopState = EBabyProogleHopState::Invalid;
    this->ThrowState = EBabyProogleThrowState::Invalid;
    this->SuperAttackState = EBabyProogleSuperAttackState::Invalid;
    this->StandingState = EBabyProogleStandingState::Invalid;
    this->HitState = EBabyProogleHitState::Invalid;
    this->CarriedState = EBabyProogleCarriedState::Invalid;
    this->AdditiveState = EBabyProogleAdditiveAnimation::Invalid;
    this->GrabbedState = EBabyProogleGrabbedState::Invalid;
    this->FlippedState = EBabyProogleFlippedState::Invalid;
    this->SpawnState = EBabyProogleSpawnState::Invalid;
    this->SlideState = EAISlideState::Invalid;
    this->UseUprightSuperAttackFall = false;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterHopState = false;
    this->ExitHopState = false;
    this->EnterDizzyState = false;
    this->ExitDizzyState = false;
    this->EnterCelebrationState = false;
    this->ExitCelebrationState = false;
    this->EnterNoticeState = false;
    this->ExitNoticeState = false;
    this->EnterHitState = false;
    this->ExitHitState = false;
    this->EnterDeathState = false;
    this->EnterFlippedDeathState = false;
    this->EnterBeingCarriedState = false;
    this->ExitBeingCarriedState = false;
    this->EnterBeingGrabbedState = false;
    this->ExitBeingGrabbedState = false;
    this->EnterThrownState = false;
    this->ExitThrownState = false;
    this->EnterSuperAttackState = false;
    this->ExitSuperAttackState = false;
    this->EnterExhaustedState = false;
    this->ExitExhaustedState = false;
    this->EnterFlippedState = false;
    this->ExitFlippedState = false;
    this->EnterBubbleState = false;
    this->ExitBubbleState = false;
    this->EnterDroppedState = false;
    this->ExitDroppedState = false;
    this->EnterSpawningState = false;
    this->ExitSpawningState = false;
    this->EnterSlidingState = false;
    this->ExitSlidingState = false;
    this->EnterTauntState = false;
    this->ExitTauntState = false;
    this->RotAngle = 0.00f;
    this->LookAtPitch = 0.00f;
    this->LookAtYaw = 0.00f;
    this->BoneLookAtPitch = 0.00f;
    this->BoneLookAtYaw = 0.00f;
    this->AlertState = EAlertState::Idle;
    this->DroppedState = EAIDroppedState::Invalid;
    this->AdditiveOutBlendTime = 0.20f;
    this->EnterAdditiveHitReaction = false;
    this->AdditiveBlendWeight = 0.00f;
    this->CapsuleComponent = NULL;
    this->LookAtComponent = NULL;
    this->AlertComponent = NULL;
}

void UBabyProogleAnimInstance::ProogleChangeState(EBabyProogleGenericState NewState) {
}

void UBabyProogleAnimInstance::PlayAdditiveAnimation(EBabyProogleAdditiveAnimation Additive) {
}


