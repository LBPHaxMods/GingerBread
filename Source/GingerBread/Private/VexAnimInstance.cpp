#include "VexAnimInstance.h"

UVexAnimInstance::UVexAnimInstance() {
    this->GenericState = EVexGenericState::Invalid;
    this->AttackState = EVexAttackState::Invalid;
    this->ArmState = EVexArmState::Invalid;
    this->DrivingState = EVexDrivingState::Invalid;
    this->AdditiveState = EVexAdditiveAnimation::Invalid;
    this->SpeechState = EVexBarkEnum::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterAttackState = false;
    this->ExitAttackState = false;
    this->EnterFinishVortexState = false;
    this->EnterLoopVortexState = false;
    this->EnterFinishMultiRollerState = false;
    this->EnterDrivingState = false;
    this->ExitDrivingState = false;
    this->EnterJumpState = false;
    this->EnterJumpLandState = false;
    this->ExitJumpState = false;
    this->EnterHitState = false;
    this->ExitHitState = false;
    this->EnterDeathState = false;
    this->AdditiveAnimDuration = 0.50f;
    this->ThrowAngleToTarget = 0.00f;
    this->YPosition = 0.00f;
    this->YSpeed = 0.00f;
    this->BossHealthRatio = 1.00f;
    this->EncounterVersion = EVexEncounterVersion::Invalid;
}

void UVexAnimInstance::PlayAdditiveAnimation(EVexAdditiveAnimation Additive) {
}

void UVexAnimInstance::ChangeState(EVexGenericState NewState) {
}


