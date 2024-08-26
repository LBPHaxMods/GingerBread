#include "RammerConfigFightBase.h"

URammerConfigFightBase::URammerConfigFightBase() {
    this->MaintainPreviousTargets = false;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 15.00f;
    this->DistanceDivisorHeuristic = 3.00f;
    this->PreferTargetsUpAhead = true;
    this->DesiredHookPointDistance = 10.00f;
}


