#include "RhythmicButtBomberAnimInstance.h"

URhythmicButtBomberAnimInstance::URhythmicButtBomberAnimInstance() {
    this->AnticipatingAnimationDuration = 1.00f;
    this->ReturningAnimationDuration = 1.00f;
    this->IdlePlayRate = 1.00f;
    this->IdleStartPosition = 1.00f;
    this->AnticipatingPlayRate = 1.00f;
    this->ReturningPlayRate = 1.00f;
    this->GenericDeathPlayRate = 1.00f;
    this->HitReaction = ERhythmicButtBomberHitReaction::JumpedOn;
    this->EnterIdle = false;
    this->ExitIdle = false;
    this->EnterAnticipating = false;
    this->ExitAnticipating = false;
    this->EnterFalling = false;
    this->ExitFalling = false;
    this->EnterReturning = false;
    this->ExitReturning = false;
    this->EnterDying = false;
    this->ExitDying = false;
}

void URhythmicButtBomberAnimInstance::OnIdleStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}


