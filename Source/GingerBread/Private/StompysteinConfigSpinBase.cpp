#include "StompysteinConfigSpinBase.h"

UStompysteinConfigSpinBase::UStompysteinConfigSpinBase() {
    this->SpinHeader = TEXT("_________________________________________________________Spin_________________________________________________________");
    this->FirstAttackTime = 0.00f;
    this->TimeBetweenSpins = 2.00f;
    this->SpinRadius = 10.00f;
    this->SpinColliderPercentageScale = 0.80f;
    this->SpinZHeight = 8.00f;
    this->SpinZHeightOffset = -1.00f;
    this->MaxSpinSpeed = 1080.00f;
    this->SpinTimingsHeader = TEXT("_________________________________________________________SpinTimings_________________________________________________________");
    this->SpinWindUpTimeFirstTime = 2.26f;
    this->SpinWindUpTime = 1.46f;
    this->SpinWindUpTimeFromTaunt = 1.03f;
    this->SpinGrowTime = 1.00f;
    this->SpinStayTime = 12.00f;
    this->SpinShrinkTime = 0.30f;
    this->SpinWindDownTime = 0.30f;
    this->SpinWindDownMeshSocket = TEXT("head_1");
    this->SpinWindDownAnimAngleTolerance = 45.00f;
    this->SpinEjectAngle = 80.00f;
    this->SpinRicochetHeader = TEXT("_________________________________________________________SpinRicochet_________________________________________________________");
    this->SpinBounceRadius = 15.00f;
    this->SpinBounceHeight = 3.00f;
    this->SpinStartHeadDamageAuraTime = 0.10f;
    this->SpinStopHeadDamageAuraTime = 0.10f;
    this->TiltBlendSpaceHeader = TEXT("_________________________________________________________TiltBlendSpace_________________________________________________________");
    this->PitchMaxLeanAmount = 70.00f;
    this->RollMaxLeanAmount = 100.00f;
    this->MinRollSineChangePerFrame = 0.00f;
    this->MaxRollSineChangePerFrame = 10.00f;
    this->MinRollRandMultiplier = 1.00f;
    this->MaxRollRandMultiplier = 1.60f;
    this->MovementDeviationHeader = TEXT("_________________________________________________________MovementDeviation_________________________________________________________");
    this->DeviationMaximum = 5.00f;
    this->DeviationAcceleration = 10.00f;
    this->DeviationUpdateRate = 12;
    this->HitNudgeHeader = TEXT("_________________________________________________________HitNudge_________________________________________________________");
    this->HitNudgeDuration = 0.50f;
    this->HitNudgeMaxImpulseSize = 7.50f;
}


