#include "RhythmicTransitionCannonAnimInst.h"

URhythmicTransitionCannonAnimInst::URhythmicTransitionCannonAnimInst() {
    this->IdleState = false;
    this->FiringState = false;
    this->WaitingToFireState = false;
    this->WaitingForPlayersState = false;
    this->GulpState = false;
    this->InviteInState = false;
    this->AdditiveBlendWeight = 0.00f;
    this->UseLookAtComponent = false;
    this->LookAtYaw = 0.00f;
    this->LookAtPitch = 0.00f;
    this->ShootingAngle = 0.00f;
    this->ShootingDistanceScalar = 0.00f;
    this->WaitingToFirePlayRate = 1.00f;
    this->WaitingToFireStartPosition = 0.00f;
    this->AdditiveHitAnimationLength = 0.90f;
    this->AdditiveGulpAnimationLength = 0.17f;
    this->AnimState = ERhythmicTransitionCannonAnimState::Idle;
    this->AdditiveAnimState = ERhythmicTransitionCannonAdditiveAnimState::NoAnim;
}

void URhythmicTransitionCannonAnimInst::SetAnimState(ERhythmicTransitionCannonAnimState AdditiveState) {
}

void URhythmicTransitionCannonAnimInst::OnWaitingToFireStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

ERhythmicTransitionCannonAnimState URhythmicTransitionCannonAnimInst::GetState() const {
    return ERhythmicTransitionCannonAnimState::NoAnim;
}


