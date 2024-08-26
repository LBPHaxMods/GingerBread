#include "GruntyConfigFightBase.h"

UGruntyConfigFightBase::UGruntyConfigFightBase() {
    this->MaintainPreviousTargets = true;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 24.00f;
    this->DistanceDivisorHeuristic = 3.00f;
    this->PreferTargetsUpAhead = true;
    this->DesiredHookPointDistance = 12.00f;
    this->DistToStopMovingWhenTargetUnreachable = 15.00f;
    this->DistToStartMovingWhenTargetUnreachable = 17.00f;
}


