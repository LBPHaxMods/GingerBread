#include "ShieldConfigFightBase.h"

UShieldConfigFightBase::UShieldConfigFightBase() {
    this->MaintainPreviousTargets = false;
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 0.00f;
    this->DesiredHookPointDistance = 15.00f;
}


