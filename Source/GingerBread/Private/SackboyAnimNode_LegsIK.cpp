#include "SackboyAnimNode_LegsIK.h"

FSackboyAnimNode_LegsIK::FSackboyAnimNode_LegsIK() {
    this->LegLengthMin = 0.00f;
    this->LegLengthMax = 0.00f;
    this->PerformRootFootIK = false;
    this->PerformPelvisOffset = false;
    this->PerformLegIKLeft = false;
    this->PerformLegIKRight = false;
    this->PerformTwoBoneIK = false;
    this->PerformTransformBoneFoot = false;
    this->PerformLimbStretchers = false;
}

