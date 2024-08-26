#include "StompnadoConfigFightBase.h"

UStompnadoConfigFightBase::UStompnadoConfigFightBase() {
    this->DesiredHookPointDistance = 15.00f;
    this->CanSnapToTargetLocation = true;
    this->SnapToTargetAcceptanceRadius = 5.00f;
    this->MaintainPreviousTargets = false;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 0.00f;
    this->MinTimeToSwitchTargets = 2.00f;
    this->StartMovingDistance = 6.00f;
    this->StopMovingDistance = 2.00f;
    this->PreSpinMovementDelay = 1.10f;
    this->ChasePreferredSeparationFromTarget = 10.00f;
    this->LockDirectionAfterHitDuration = 0.50f;
    this->LockDirectionAfterHitDistance = 30.00f;
    this->SpinChaseCurveRate = 50.00f;
    this->SpinChaseTargetDistance = 20.00f;
    this->PhaseThreeRefreshMoveLocFreq = 2.00f;
    this->PhaseTwoDuration = 30.00f;
    this->PhaseThreeDuration = 18.00f;
    this->PhaseVulnerableMaxDuration = 6.50f;
}


