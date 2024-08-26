#include "ConfigSackboyGloopDefaults.h"

UConfigSackboyGloopDefaults::UConfigSackboyGloopDefaults() {
    this->NormalVectorLerpSpeed = 0.25f;
    this->InAirCorrectionSpeed = 0.75f;
    this->JumpTrackingAngle = 10.00f;
    this->ExtraRayLength = 0.50f;
    this->RayCastLength = 20.00f;
    this->HeightAboveGroundToConsiderGrounded = 6.00f;
    this->RollOffset = 1.20f;
    this->ReattachPreventTime = 0.06f;
    this->GrabReattachPreventTime = 0.25f;
    this->GloopExitNudgeForce = 75.00f;
    this->AngleToJumpExit = 20.00f;
    this->PreventFalloff = true;
    this->RayCheckDistance = 2.00f;
    this->RayCheckStartDistance = 1.00f;
    this->raychecks = 1;
    this->RayCheckExtraWalkDistance = 1.00f;
    this->MaxHeightDelta = 0.80f;
    this->PreventFalloffWithAngle = true;
    this->AngleToPreventFalloff = 30.00f;
    this->AngleToCurrentToBeLedge = 10.00f;
    this->HighAngleToBeLedge = 75.00f;
    this->ShowDebug = false;
    this->ShowRayCheckDebug = false;
    this->DisplayAngle = false;
    this->UseSmallJump = false;
    this->TimeToAllowJump = 0.28f;
    this->AngleToMicroJump = 25.00f;
    this->LaunchOffSackboyTime = 0.10f;
    this->MinGloopOnToSurfaceAngle = 8.00f;
    this->MaxGloopOnToSurfaceAngle = 75.00f;
}


