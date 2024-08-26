#include "JumpyTurretAnimInstance.h"

UJumpyTurretAnimInstance::UJumpyTurretAnimInstance() {
    this->GenericState = EJumpyTurretGenericState::Invalid;
    this->SprayAttackState = EJumpyTurretSprayAttackState::Invalid;
    this->MortarAttackState = EJumpyTurretMortarAttackState::Invalid;
    this->JumpState = EJumpyTurretJumpState::Invalid;
    this->HitState = EJumpyTurretHitState::Invalid;
    this->AttackingLeg = EJumpyTurretLeg::Invalid;
    this->AdditiveState = EJumpyTurretAdditiveState::Invalid;
    this->AdditiveBlendWeight = 0.00f;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterSprayAttackState = false;
    this->ExitSprayAttackState = false;
    this->EnterMortarAttackState = false;
    this->ExitMortarAttackState = false;
    this->EnterJumpState = false;
    this->ExitJumpState = false;
    this->EnterHitState = false;
    this->ExitHitState = false;
    this->EnterLegAttackState = false;
    this->ExitLegAttackState = false;
    this->EnterCelebrationState = false;
    this->ExitCelebrationState = false;
    this->EnterDeathState = false;
    this->ExitDeathState = false;
    this->LookAtPitch = 0.00f;
    this->LookAtYaw = 0.00f;
    this->LookAtComponent = NULL;
}

void UJumpyTurretAnimInstance::PlayAdditiveAnimation(EJumpyTurretAdditiveState Additive) {
}

void UJumpyTurretAnimInstance::ClearAdditiveFlags() {
}

void UJumpyTurretAnimInstance::ChangeState(EJumpyTurretGenericState NewState) {
}


