#include "SniperAnimInstance.h"

USniperAnimInstance::USniperAnimInstance() {
    this->GenericState = ESniperGenericState::Invalid;
    this->ReloadState = ESniperReloadState::Invalid;
    this->RollStunState = ESniperRollStunState::Invalid;
    this->ThrownState = ESniperThrownState::Invalid;
    this->CurrentSpike = ESniperSpike::Invalid;
    this->CurrentFollowThroughSpike = ESniperSpike::Invalid;
    this->CurrentReloadSpike = ESniperSpike::Invalid;
    this->EscapeState = ESniperEscapeState::Invalid;
    this->TurnState = ESniperTurnOnSpot::Invalid;
    this->AdditiveState = ESniperAdditiveAnim::Invalid;
    this->DroppedState = EAIDroppedState::Invalid;
    this->SlideState = EAISlideState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterIdleToAlertState = false;
    this->EnterAlertToIdleState = false;
    this->EnterThrowState = false;
    this->ExitThrowState = false;
    this->EnterReloadState = false;
    this->ExitReloadState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterTakeHitLandState = false;
    this->EnterCarriedState = false;
    this->ExitCarriedState = false;
    this->EnterThrownState = false;
    this->ExitThrownState = false;
    this->EnterTurnOnSpotState = false;
    this->ExitTurnOnSpotState = false;
    this->EnterRollStunnedState = false;
    this->ExitRollStunnedState = false;
    this->EnterDeathState = false;
    this->EnterThrowFollowThroughState = false;
    this->EnterThrowAirDashState = false;
    this->EnterCowerFinishState = false;
    this->EnterCowerState = false;
    this->ExitCowerState = false;
    this->EnterApproachState = false;
    this->ExitApproachState = false;
    this->EnterEndApproachState = false;
    this->EnterEscapeState = false;
    this->ExitEscapeState = false;
    this->EnterExhaustedState = false;
    this->ExitExhaustedState = false;
    this->EnterFlightTakeoffState = false;
    this->ExitFlightTakeoffState = false;
    this->EnterFlightDescentState = false;
    this->ExitFlightDescentState = false;
    this->EnterBoostbackDescentState = false;
    this->EnterFlightDescentLandState = false;
    this->EnterDroppedState = false;
    this->ExitDroppedState = false;
    this->EnterBubbleState = false;
    this->ExitBubbleState = false;
    this->EnterSlidingState = false;
    this->ExitSlidingState = false;
    this->EnterCelebrateState = false;
    this->ExitCelebrateState = false;
    this->EnterTauntState = false;
    this->ExitTauntState = false;
    this->IsAlert = false;
    this->DegreesOffDesiredAngle = 0.00f;
    this->BlendTurningWeight = 0.00f;
    this->LookAtPitch = 0.00f;
    this->LookAtYaw = 0.00f;
    this->BoneLookAtPitch = 0.00f;
    this->BoneLookAtYaw = 0.00f;
    this->AdditiveBlendWeight = 0.00f;
    this->AdditiveOutBlendTime = 0.20f;
    this->IsInFlight = false;
}

void USniperAnimInstance::PlayAdditiveAnimation(ESniperAdditiveAnim Additive) {
}

void USniperAnimInstance::ChangeState(ESniperGenericState NewState) {
}


