#include "HitPointPriorityFilterData.h"

FHitPointPriorityFilterData::FHitPointPriorityFilterData() {
    this->Priority = 0;
    this->Direction = EHitPointFilterDirection::Forwards;
    this->DirectionAngleFilter = 0.00f;
    this->PerpendicularAngleFilter = 0.00f;
}

