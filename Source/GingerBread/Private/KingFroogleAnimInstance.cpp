#include "KingFroogleAnimInstance.h"

UKingFroogleAnimInstance::UKingFroogleAnimInstance() {
    this->GenericState = EKingFroogleGenericState::Invalid;
    this->HopState = EKingFroogleHopState::Invalid;
    this->StompState = EKingFroogleStompState::Invalid;
    this->TurnOnSpotState = EKingFroogleTurnOnSpotState::Invalid;
    this->SuperAttackState = EKingFroogleSuperAttackState::Invalid;
    this->AdditiveState = EKingFroogleAdditiveAnimation::Invalid;
    this->PhaseTransitionType = EKingFrooglePhaseTransition::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterTurnState = false;
    this->ExitTurnState = false;
    this->EnterPhaseTransitionState = false;
    this->ExitPhaseTransitionState = false;
    this->EnterDeathState = false;
    this->EnterHopState = false;
    this->ExitHopState = false;
    this->EnterCantAttackState = false;
    this->ExitCantAttackState = false;
    this->EnterStompState = false;
    this->ExitStompState = false;
    this->EnterSuperAttackState = false;
    this->ExitSuperAttackState = false;
    this->IsAlert = false;
    this->RunThreshold = 5.00f;
    this->AdditiveOutBlendTime = 0.20f;
    this->LookAtPitch = 0.00f;
    this->LookAtYaw = 0.00f;
    this->BoneLookAtPitch = 0.00f;
    this->BoneLookAtYaw = 0.00f;
    this->EnterAdditiveHitReaction = false;
    this->AdditiveBlendWeight = 0.00f;
}

void UKingFroogleAnimInstance::PlayAdditiveAnimation(EKingFroogleAdditiveAnimation Additive) {
}

void UKingFroogleAnimInstance::ChangeState(EKingFroogleGenericState NewState) {
}


