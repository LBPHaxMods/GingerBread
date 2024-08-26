#include "KingFroogleConfigFightBase.h"

UKingFroogleConfigFightBase::UKingFroogleConfigFightBase() {
    this->MaintainPreviousTargets = false;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 0.00f;
    this->DistanceDivisorHeuristic = 3.00f;
    this->PreferTargetsUpAhead = true;
    this->DesiredHookPointDistance = 14.00f;
    this->CoordinatedAttackAbleTimeout = 3.00f;
    this->TurnSpeed = 360.00f;
    this->FinishTurnTolerance = 1.00f;
    this->MinAngleForTurnToHop = 60.00f;
    this->MinAngleForAlignToCentre = 5.00f;
}


