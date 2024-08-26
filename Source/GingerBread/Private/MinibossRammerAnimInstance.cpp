#include "MinibossRammerAnimInstance.h"

UMinibossRammerAnimInstance::UMinibossRammerAnimInstance() {
    this->GenericState = EMinibossRammerGenericState::Invalid;
    this->IdleState = EMinibossRammerIdleState::Invalid;
    this->CarriedState = EMinibossRammerCarriedState::Invalid;
    this->ThrowState = EMinibossRammerThrowState::Invalid;
    this->ChargeState = EMinibossRammerChargeState::Invalid;
    this->ChargeFinishReason = EChargeFinishReason::Invalid;
    this->FlippedState = EMinibossRammerFlippedState::Invalid;
    this->HitState = EMinibossRammerHitState::Invalid;
    this->CantAttack = EMinibossRammerCantAttack::Invalid;
    this->AdditiveState = EMinibossRammerAdditiveAnimation::Invalid;
    this->SpawnState = EMinibossRammerSpawnState::Invalid;
    this->AlertState = EAlertState::Idle;
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
    this->LinearSpeed = 0.00f;
    this->RotationalDelta = 0.00f;
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

void UMinibossRammerAnimInstance::PlayAdditiveAnimation(EMinibossRammerAdditiveAnimation Additive) {
}


