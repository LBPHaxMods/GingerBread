#include "StompnadoConfigSpinBase.h"

UStompnadoConfigSpinBase::UStompnadoConfigSpinBase() {
    this->SpinRadius = 16.00f;
    this->SpinColliderPercentageScale = 0.90f;
    this->SpinZHeightOffset = -5.00f;
    this->SpinWindUpTime = 1.00f;
    this->SpinWindDownTime = 0.50f;
    this->SpinEjectAngle = 80.00f;
    this->PitchMaxLeanAmount = 110.00f;
    this->RollMaxLeanAmount = 100.00f;
    this->MinRollSineChangePerFrame = 2.00f;
    this->MaxRollSineChangePerFrame = 4.50f;
    this->MinRollRandMultiplier = 1.00f;
    this->MaxRollRandMultiplier = 1.40f;
    this->DeviationMaximum = 120.00f;
    this->DeviationAcceleration = 16.00f;
    this->DeviationUpdateRate = 15;
}


