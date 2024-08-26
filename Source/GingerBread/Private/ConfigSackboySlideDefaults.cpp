#include "ConfigSackboySlideDefaults.h"

UConfigSackboySlideDefaults::UConfigSackboySlideDefaults() {
    this->PauseOnSlide = false;
    this->ShowDebug = false;
    this->SlopeAngleMin = 25.00f;
    this->SlopeStandingAngle = 64.00f;
    this->SlopeJumpRestrictedAngle = 56.00f;
    this->SlopeLandingSpeedReduction = 0.25f;
    this->SlopeLandingMaxSpeedFactor = 0.50f;
    this->SlopeFrictionCurve = NULL;
    this->SlopeFrictionIntertiaControl = 0.25f;
    this->SlopeSpeedVariation = 22.00f;
    this->RollMinInput = 0.50f;
    this->RollMaxInput = 1.10f;
    this->SlopeSpeedSidewaysSpeedLoss = 0.50f;
    this->SlopeAccelVariation = 16.00f;
    this->SlopeSidewaysSpeedProportion = 0.87f;
    this->SlopeSidewaysTimeToMaxSpeed = 0.60f;
    this->SlopeSidewaysTimeToStop = 1.50f;
    this->StrafeSlideSidewaysSpeed.AddDefaulted(3);
    this->StrafeSlideSidewaysTimeToMaxSpeed = 0.32f;
    this->StrafeSlideSidewaysTimeToStop = 0.80f;
    this->ReduceInertia = 0.75f;
    this->MinInertia = 0.05f;
    this->InertiaIncrement = 0.20f;
    this->SidewaysMaxIncInput = 0.35f;
    this->SlidingTurnAngle = 60.00f;
    this->SlopeTurningFrictionReductionPower = 1.25f;
    this->WalkSpeedThreshold = 38.00f;
    this->RestSpeed = 10.00f;
    this->TurnInputDeadZone = 0.05f;
    this->TurnInertiaDelay = 0.20f;
    this->InertiaAngleTolerance = 8.00f;
    this->EmergencyMinTurn = 900.00f;
    this->EmergencyMaxTurn = 4096.00f;
    this->EmergencyTurnAccel = 512.00f;
    this->EmergencyTurnDecel = 1024.00f;
    this->PullBackExtraFriction = 0.00f;
    this->PushForwardFrictionReduction = 0.00f;
    this->UprightMaxSidewaysSpeed = 32.00f;
    this->UprightMaxSidewaysAccel = 2.00f;
    this->UprightMaxSidewaysDecel = 0.50f;
    this->UprightSidewaysFriction = 0.01f;
    this->StandUpFromBumTime = 0.10f;
    this->StandUpFromBellyTime = 0.40f;
    this->FlipFromBellyTime = 0.30f;
    this->SlideOnBumMeshOffset = 0.00f;
    this->SlideOnBellyMeshOffset = 0.00f;
    this->SearchRailDebug = false;
    this->SearchRailDebugThickness = 0.40f;
    this->SearchRailLift = 1.00f;
    this->SearchRailLength = 4.00f;
    this->SearchRailSampleCount = 4;
    this->RayCheckLengthOffset = 3.00f;
    this->ExitFriction = 0.04f;
    this->SlideBreakoutPreventDuration = 0.25f;
    this->CollisionCapsuleRadius = 2.00f;
    this->CollisionCapsuleHalfHeight = 2.00f;
    this->CollisionCapsuleOffset = -1.00f;
    this->BounceOffDuration = 0.10f;
    this->BounceOffMinSpeed = 24.00f;
    this->BounceOffRestitution = 0.50f;
    this->BounceOffSackboyRestitution = 0.50f;
}


