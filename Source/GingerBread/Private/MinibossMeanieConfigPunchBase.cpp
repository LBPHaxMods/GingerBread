#include "MinibossMeanieConfigPunchBase.h"

UMinibossMeanieConfigPunchBase::UMinibossMeanieConfigPunchBase() {
    this->PunchSignpostTime = 1.90f;
    this->PunchSignpostRotationSpeed = 360.00f;
    this->TotalPunchTime = 12.00f;
    this->PunchRotationSpeed = 480.00f;
    this->StartWithRightArm = true;
    this->MinDistanceToDoLongRangeAttack = 26.00f;
    this->PunchTauntDuration = 2.00f;
    this->LeftArmBone = TEXT("l_arm_1");
    this->RightArmBone = TEXT("r_arm_1");
    this->MaxPredictionAngleDeviation = 72.54f;
    this->PredictionMinRange = 20.00f;
    this->PredictionMaxRange = 60.00f;
    this->MaxPredictionLocationSpeed = 100.00f;
    this->InnerRingRotatesClockwise = false;
    this->RotationDirectionTogglesAfterEachAttack = true;
    this->WobbleBombRespawnTime = 1.20f;
}


