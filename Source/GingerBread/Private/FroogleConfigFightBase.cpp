#include "FroogleConfigFightBase.h"

UFroogleConfigFightBase::UFroogleConfigFightBase() {
    this->DesiredHookPointDistance = 12.00f;
    this->MaintainPreviousTargets = false;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 25.00f;
    this->DistanceDivisorHeuristic = 3.00f;
    this->PreferTargetsUpAhead = true;
    this->CoordinatedAttackAbleTimeout = 3.00f;
    this->CantAttackRotationSpeed = 180.00f;
    this->CantAttackMinAngleForTurn = 45.00f;
    this->CantAttackPredictAheadSeconds = 0.10f;
}


