#include "StompysteinConfigFightBase.h"

UStompysteinConfigFightBase::UStompysteinConfigFightBase() {
    this->DetectionHeader = TEXT("_________________________________________________________Detection_________________________________________________________");
    this->MaintainPreviousTargets = false;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 0.00f;
    this->DistanceDivisorHeuristic = 3.00f;
    this->PreferTargetsUpAhead = true;
    this->MovementDecisionmakingHeader = TEXT("_________________________________________________________MovementDecisionmaking_________________________________________________________");
    this->MinTimeToSwitchTargets = 5.00f;
    this->StartMovingDistance = 16.00f;
    this->StopMovingDistance = 14.00f;
    this->PreSpinTurningDelayFirstTime = 2.37f;
    this->PreSpinTurningDelay = 1.46f;
    this->PreSpinTurningDelayFromTaunt = 1.03f;
    this->PreSpinMovementDelayFirstTime = 2.37f;
    this->PreSpinMovementDelay = 1.46f;
    this->PreSpinMovementDelayFromTaunt = 1.03f;
    this->ChaseHeader = TEXT("_________________________________________________________Chase_________________________________________________________");
    this->SpinningChaseParamsPerPhase.AddDefaulted(3);
    this->TurnToCameraRotationRate = 720.00f;
    this->ChasePreferredSeparationFromTarget = 0.00f;
    this->LockDirectionAfterHitDuration = 0.50f;
    this->LockDirectionAfterHitDistance = 30.00f;
    this->SpinChaseCurveRate = 85.00f;
    this->SpinChaseTargetDistance = 30.00f;
    this->PhaseHeader = TEXT("_________________________________________________________Phase_________________________________________________________");
    this->AtCentreDistance = 10.00f;
    this->PrePhaseDelay = 1.00f;
    this->PostPhaseDelay = 0.50f;
}


