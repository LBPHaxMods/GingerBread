#include "MamapedeMovementParameters.h"

FMamapedeMovementParameters::FMamapedeMovementParameters() {
    this->RequestServerTimestamp = 0.00f;
    this->MovementMode = EMamapedeMovementMode::Inavlid;
    this->UseForwardVectorAsBodyUp = false;
    this->SmoothMoveTarget = NULL;
    this->IsSmoothMovingVertically = false;
    this->splineIndex = 0;
    this->FollowSplineEarlyDiveTime = 0.00f;
}

