#include "MinibossMeanieConfigFightBase.h"

UMinibossMeanieConfigFightBase::UMinibossMeanieConfigFightBase() {
    this->MaintainPreviousTargets = false;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 24.00f;
    this->DistanceDivisorHeuristic = 3.00f;
    this->PreferTargetsUpAhead = false;
    this->DesiredHookPointDistance = 25.00f;
    this->CleaveAttackTime = 60.00f;
}


