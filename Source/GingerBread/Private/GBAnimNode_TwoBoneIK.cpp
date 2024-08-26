#include "GBAnimNode_TwoBoneIK.h"

FGBAnimNode_TwoBoneIK::FGBAnimNode_TwoBoneIK() {
    this->StartStretchRatio = 0.00f;
    this->MaxStretchScale = 0.00f;
    this->EffectorLocationSpace = BCS_WorldSpace;
    this->JointTargetLocationSpace = BCS_WorldSpace;
    this->bAllowStretching = false;
    this->bTakeRotationFromEffectorSpace = false;
    this->bMaintainEffectorRelRot = false;
    this->bAllowTwist = false;
}

