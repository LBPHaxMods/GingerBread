#include "PatrollingCrabAnimInstance.h"

UPatrollingCrabAnimInstance::UPatrollingCrabAnimInstance() {
    this->DoTipAnim = false;
    this->CanGetHit = true;
    this->Speed = 0.00f;
    this->moveLeft = false;
    this->MoveRight = false;
    this->Idle = false;
    this->HitState = false;
    this->AtEndOfPath = false;
    this->HitAdditiveState = false;
    this->AdditiveBlendWeight = 0.00f;
    this->AdditiveTransitionTime = 0.50f;
    this->AdditiveAnimationMinTime = 0.08f;
    this->HitAdditiveAnimationTime = 1.00f;
    this->HasAdditiveAnimationFinished = true;
    this->HasAdditiveAnimationExited = true;
    this->AdditiveAnimState = EPatrollingCrabAdditiveAnimState::Hit;
}

void UPatrollingCrabAnimInstance::StopMoving() {
}

void UPatrollingCrabAnimInstance::StopAdditiveAnimation(EPatrollingCrabAdditiveAnimState AdditiveState) {
}

void UPatrollingCrabAnimInstance::StartMoving(float NewSpeed, bool NewMoveLeft) {
}

void UPatrollingCrabAnimInstance::PlayAdditiveAnimation(EPatrollingCrabAdditiveAnimState AdditiveState) {
}


void UPatrollingCrabAnimInstance::EndOfPathReached() {
}


