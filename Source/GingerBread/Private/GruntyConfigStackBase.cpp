#include "GruntyConfigStackBase.h"

UGruntyConfigStackBase::UGruntyConfigStackBase() {
    this->TimberThrowDistanceConstantOffset = 3.00f;
    this->TimberThrowDistanceBetweenGruntys = 12.00f;
    this->TimberRecoveryTime = 0.50f;
    this->TotalStackLaunchAnimTime = 1.40f;
    this->PreLaunchDelay = 0.68f;
    this->RecoveryTime = 0.50f;
    this->PredictAheadTime = 0.30f;
    this->MaxLaunchAngle = 75.00f;
    this->LaunchRanges.AddDefaulted(4);
    this->ArchHeight = 15.00f;
    this->DelayBetweenLaunchAttacks = 1.00f;
}


