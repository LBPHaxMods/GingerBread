#include "ConfigSackboyWalkDefaults.h"

UConfigSackboyWalkDefaults::UConfigSackboyWalkDefaults() {
    this->DeprecatedSprintLimit = 42.00f;
    this->DebugDrawOverlapCapsule = false;
    this->DebugDrawArmSweepLeft = false;
    this->DebugDrawArmSweepRight = false;
    this->DebugDrawSurfaceNormalLeft = false;
    this->DebugDrawSurfaceNormalRight = false;
    this->BigStopThreshold = 33.00f;
    this->FullSpeedMaxDeceleration = 64.00f;
    this->MaxTurn = 540.00f;
    this->StartWalkingForwardAngle = 32.00f;
    this->ResponsiveTimeThreshold = 0.17f;
    this->ResponsiveResetAngle = 32.00f;
    this->ResponsiveSpeedThreshold = 16.00f;
    this->IKLeftHandSocket = TEXT("hand_L_grab_socket");
    this->IKRightHandSocket = TEXT("hand_R_grab_socket");
    this->IKCapsuleRadius = 0.50f;
    this->IKCapsuleHalfHeight = 0.40f;
    this->IKSurfaceOffset = 0.00f;
    this->IKPhaseInverseSurfaceOffset = 0.00f;
    this->IKPushBack = 3.00f;
    this->IKWaitDelay = 0.10f;
    this->IKCollisionProfile = TEXT("SackboyRayChecks");
    this->OnBackLockedDuration = 0.10f;
    this->OnBackStartWalkDuration = 0.40f;
    this->IntoRunDuration = 0.20f;
    this->RunStopMinTime = 0.40f;
    this->StandingTurn180Duration = 0.20f;
    this->StandingTurn180AnimationDuration = 0.20f;
    this->StandingTurn90Duration = 0.20f;
    this->StandingTurn90AnimationDuration = 0.20f;
    this->FlaglinesSidewaysdeadzone = 0.50f;
}


