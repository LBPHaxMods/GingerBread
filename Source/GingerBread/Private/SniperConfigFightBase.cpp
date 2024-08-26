#include "SniperConfigFightBase.h"

USniperConfigFightBase::USniperConfigFightBase() {
    this->MaintainPreviousTargets = false;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 50.00f;
    this->DistanceDivisorHeuristic = 3.00f;
    this->PreferTargetsUpAhead = true;
    this->DesiredHookPointDistance = 15.00f;
    this->FightDecisionsHeader = TEXT("_________________________________________________________FightDecisions_________________________________________________________");
    this->RunAwayStartDistance = 25.00f;
    this->RunAwayStopDistance = 55.00f;
    this->MaxAttackDistance = 100.00f;
    this->MaxAttackDistanceWhenApproaching = 80.00f;
    this->CowerStartDistance = 25.00f;
    this->CowerStopDistance = 27.00f;
    this->RunAwayHeader = TEXT("_________________________________________________________RunAway_________________________________________________________");
    this->BackoffTime = 1.60f;
    this->SafeDistanceForTurn = 28.00f;
    this->BackwardsMoveSpeedModifier = -6.00f;
    this->TurnAnimTriggerAngle = 45.00f;
}


