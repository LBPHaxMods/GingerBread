#include "FodderAnimInstance.h"

UFodderAnimInstance::UFodderAnimInstance() {
    this->MovementSpeed = 0.00f;
    this->IdleLoopMin = 10.00f;
    this->IdleLoopMax = 15.00f;
    this->AIIdleType = EAIIdleType::Normal;
    this->IsLickIdle = false;
    this->EnterMovingState = false;
    this->ExitMovingState = false;
    this->EnterAlertState = false;
    this->ExitAlertState = false;
    this->EnterInterruptionState = false;
    this->ExitInterruptionState = false;
    this->EnterChargeState = false;
    this->ExitChargeState = false;
    this->IsDeathByJumpedOn = false;
    this->IsDeathBySlap = false;
    this->IsDeathByRoll = false;
    this->EnterDeathState = false;
    this->EnterJumpState = false;
    this->JumpEnterTravelState = false;
    this->JumpEnterLandState = false;
    this->JumpExitLandState = false;
    this->ChargeEnterFodderRunState = false;
    this->ChargeExitFodderRunState = false;
    this->ChargeEnterMissedState = false;
    this->ChargeExitMissedState = false;
    this->ChargeEnterSackboyHitState = false;
    this->ChargeExitSackboyHitState = false;
    this->ChargeEnterImpactState = false;
    this->ChargeIsDazed = false;
    this->ChargeExitFodderDazedGetupState = false;
    this->ChargeEnterParkedState = false;
    this->ChargeEnterWarmupState = false;
    this->MovementComponent = NULL;
}

void UFodderAnimInstance::OnStateChanged(EAIAnimState OldState) {
}


