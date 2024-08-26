#include "RammerAnimInstance.h"

URammerAnimInstance::URammerAnimInstance() {
    this->GenericState = ERammerGenericState::Invalid;
    this->IdleState = ERammerIdleState::Invalid;
    this->CarriedState = ERammerCarriedState::Invalid;
    this->ThrowState = ERammerThrowState::Invalid;
    this->ChargeState = ERammerChargeState::Invalid;
    this->ChargeFinishReason = EChargeFinishReason::Invalid;
    this->FlippedState = ERammerFlippedState::Invalid;
    this->HitState = ERammerHitState::Invalid;
    this->CantAttack = ERammerCantAttack::Invalid;
    this->AdditiveState = ERammerAdditiveAnimation::Invalid;
    this->SpawnState = ERammerSpawnState::Invalid;
    this->AlertState = EAlertState::Idle;
    this->DroppedState = EAIDroppedState::Invalid;
    this->SlideState = EAISlideState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterChargeState = false;
    this->ExitChargeState = false;
    this->EnterCarriedState = false;
    this->ExitCarriedState = false;
    this->EnterHitState = false;
    this->ExitHitState = false;
    this->EnterFlippedState = false;
    this->ExitFlippedState = false;
    this->EnterFlippedDeathState = false;
    this->ExitFlippedDeathState = false;
    this->EnterCantAttackState = false;
    this->ExitCantAttackState = false;
    this->EnterThrownState = false;
    this->ExitThrownState = false;
    this->EnterSpawningState = false;
    this->ExitSpawningState = false;
    this->EnterDeathState = false;
    this->EnterDroppedState = false;
    this->ExitDroppedState = false;
    this->EnterBubbleState = false;
    this->ExitBubbleState = false;
    this->EnterSlidingState = false;
    this->ExitSlidingState = false;
    this->EnterTauntState = false;
    this->ExitTauntState = false;
    this->LinearSpeed = 0.00f;
    this->RotationalDelta = 0.00f;
    this->IsArmourActive = false;
    this->SkipFlippedStart = false;
    this->LookAtPitch = 0.00f;
    this->LookAtYaw = 0.00f;
    this->BoneLookAtPitch = 0.00f;
    this->BoneLookAtYaw = 0.00f;
    this->AdditiveOutBlendTime = 0.20f;
    this->EnterAdditiveHitReaction = false;
    this->AdditiveBlendWeight = 0.00f;
    this->CapsuleComponent = NULL;
    this->LookAtComponent = NULL;
    this->AlertComponent = NULL;
}

void URammerAnimInstance::PlayAdditiveAnimation(ERammerAdditiveAnimation Additive) {
}


