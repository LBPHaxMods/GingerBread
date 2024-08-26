#include "TreasureKeeperSplineMarkerBase.h"

ATreasureKeeperSplineMarkerBase::ATreasureKeeperSplineMarkerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

    this->DistanceAlongSpline = 0.00f;
    this->RelevantWhileMovingForwards = true;
    this->RelevantWhileMovingBackwards = true;
}


