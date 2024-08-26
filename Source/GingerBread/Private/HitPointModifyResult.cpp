#include "HitPointModifyResult.h"

FHitPointModifyResult::FHitPointModifyResult() {
    this->Status = EHitPointModifyStatus::None;
    this->HitPointsBefore = 0;
    this->HitPointsAfter = 0;
    this->ActioningStatus = EHitPointActionStatus::ActionPending;
}

