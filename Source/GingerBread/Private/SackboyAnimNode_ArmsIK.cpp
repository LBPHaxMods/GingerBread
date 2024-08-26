#include "SackboyAnimNode_ArmsIK.h"

FSackboyAnimNode_ArmsIK::FSackboyAnimNode_ArmsIK() {
    this->ArmLengthMin = 0.00f;
    this->ArmLengthMax = 0.00f;
    this->PerformRootHandIK = false;
    this->PerformArmIKLeft = false;
    this->PerformArmIKRight = false;
    this->PerformTwoBoneIK = false;
    this->PerformTransformBoneHand = false;
    this->PerformLimbStretchers = false;
    this->DebugOffsetArms = false;
}

