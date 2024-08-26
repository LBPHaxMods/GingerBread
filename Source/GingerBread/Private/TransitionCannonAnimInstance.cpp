#include "TransitionCannonAnimInstance.h"

UTransitionCannonAnimInstance::UTransitionCannonAnimInstance() {
    this->IdleState = false;
    this->FiringState = false;
    this->WaitingForPlayersState = false;
    this->GulpState = false;
    this->InviteInState = false;
    this->AdditiveBlendWeight = 0.00f;
    this->UseLookAtComponent = false;
    this->LookAtYaw = 0.00f;
    this->LookAtPitch = 0.00f;
    this->ShootingAngle = 0.00f;
    this->ShootingDistanceScalar = 0.00f;
    this->AdditiveHitAnimationLength = 0.90f;
    this->AdditiveGulpAnimationLength = 0.17f;
    this->AnimState = ETransitionCannonAnimState::Idle;
    this->AdditiveAnimState = ETransitionCannonAdditiveAnimState::NoAnim;
}

void UTransitionCannonAnimInstance::SetAnimState(ETransitionCannonAnimState AdditiveState) {
}

ETransitionCannonAnimState UTransitionCannonAnimInstance::GetState() const {
    return ETransitionCannonAnimState::NoAnim;
}


