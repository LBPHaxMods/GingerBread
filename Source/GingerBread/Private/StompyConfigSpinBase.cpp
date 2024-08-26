#include "StompyConfigSpinBase.h"

UStompyConfigSpinBase::UStompyConfigSpinBase() {
    this->SpinHeader = TEXT("_________________________________________________________Spin_________________________________________________________");
    this->FirstAttackTime = 0.10f;
    this->TimeBetweenSpins = 2.50f;
    this->SpinRadius = 25.00f;
    this->SpinColliderPercentageScale = 0.70f;
    this->SpinZHeight = 5.00f;
    this->SpinZHeightOffset = 1.00f;
    this->MaxSpinSpeed = 1080.00f;
    this->SpinTimingsHeader = TEXT("_________________________________________________________SpinTimings_________________________________________________________");
    this->SpinWindUpTime = 1.02f;
    this->SpinGrowTime = 0.55f;
    this->SpinStayTime = 4.10f;
    this->SpinShrinkTime = 0.20f;
    this->SpinWindDownTime = 0.80f;
    this->SpinWindDownMeshSocket = TEXT("head_1");
    this->SpinWindDownAnimAngleTolerance = 45.00f;
    this->SpinEjectAngle = 80.00f;
    this->SpinRicochetHeader = TEXT("_________________________________________________________SpinRicochet_________________________________________________________");
    this->SpinBounceRadius = 23.00f;
    this->SpinBounceHeight = 3.00f;
    this->TiltBlendSpaceHeader = TEXT("_________________________________________________________TiltBlendSpace_________________________________________________________");
    this->PitchMaxLeanAmount = 70.00f;
    this->RollMaxLeanAmount = 100.00f;
    this->MinRollSineChangePerFrame = 2.00f;
    this->MaxRollSineChangePerFrame = 4.50f;
    this->MinRollRandMultiplier = 1.00f;
    this->MaxRollRandMultiplier = 1.40f;
    this->MovementDeviationHeader = TEXT("_________________________________________________________MovementDeviation_________________________________________________________");
    this->DeviationMaximum = 50.00f;
    this->DeviationAcceleration = 5.00f;
    this->DeviationUpdateRate = 3;
}


