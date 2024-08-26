#include "GrabSearchSettings.h"

FGrabSearchSettings::FGrabSearchSettings() {
    this->DefaultArmLength = 0.00f;
    this->GrabLaunchCooldownDuration = 0.00f;
    this->GrabLaunchDroppedCooldownDuration = 0.00f;
    this->SearchCapsuleHeight = 0.00f;
    this->SearchCapsuleRadius = 0.00f;
    this->SearchCatchRadius = 0.00f;
    this->SearchCatchMinimumThrownTime = 0.00f;
    this->MaximumTwistAngle = 0.00f;
    this->MaximumReachAngle = 0.00f;
    this->MaximumCarryReachAngle = 0.00f;
    this->TuckTwistUnderObjectAngle = 0.00f;
    this->QuadCastEnabled = false;
    this->QuadCastSeparation = 0.00f;
    this->QuadCastStartOffset = 0.00f;
    this->QuadCastTolerance = 0.00f;
    this->GroundedDistanceTwistWeight = 0.00f;
    this->UngroundedDistanceTwistWeight = 0.00f;
    this->SackboyScoreWeight = 0.00f;
}

