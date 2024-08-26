#include "RollHoleInfo.h"

FRollHoleInfo::FRollHoleInfo() {
    this->ForceEnter = false;
    this->Direction = ERollHoleSplineDirection::Forwards;
    this->VerticalOffset = 0.00f;
    this->splineIndex = 0;
    this->StartDistance = 0.00f;
}

