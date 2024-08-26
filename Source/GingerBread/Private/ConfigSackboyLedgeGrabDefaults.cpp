#include "ConfigSackboyLedgeGrabDefaults.h"

UConfigSackboyLedgeGrabDefaults::UConfigSackboyLedgeGrabDefaults() {
    this->Enabled = true;
    this->PauseOnEnter = false;
    this->DebugDetection = false;
    this->MaxVerticalSpeed = 20.00f;
    this->LedgeOffsets.AddDefaulted(2);
    this->EdgeRayOffset = 0.40f;
    this->RayOffset = 0.40f;
    this->RayLength = 5.00f;
    this->VerticalRayLength = 6.00f;
    this->FaceRayLength = 1.00f;
    this->ComponentFilteringMaxHeight = -1;
    this->ComponentFilteringMaxDepth = 0;
    this->ComponentFilteringMatchAnyTag = true;
    this->MaxSlope = 42.00f;
    this->LedgeSimilarityThreshold = 0.01f;
    this->FrontAngle = 80.00f;
    this->DebugIdle = false;
    this->HangHeight = 0.00f;
    this->LedgeAlignmentMoveSpeed = 50.00f;
    this->LedgeAlignmentTurnSpeed = 450.00f;
    this->LedgeFaceMaxAngle = 20.00f;
    this->PullUpOnButtonPress = true;
    this->DropOffOnButtonPress = true;
    this->PullUpThreshold = 0.75f;
    this->DropOffThreshold = -0.75f;
    this->DebugPullUp = false;
    this->DebugPauseOnPullUp = false;
    this->PullUpTime = 0.00f;
    this->QuickPullUpDetectionFrames = 3;
    this->QuickPullUpDuration = 0.40f;
    this->DropOffTime = 0.00f;
    this->DropOffMoveSpeed = 200.00f;
    this->DropOffCooldownTime = 0.30f;
    this->DropOffDelay = 0.03f;
    this->CapsuleOffset = 0.00f;
    this->SphereOffset = 0.50f;
    this->MaxHangTime = 1.00f;
    this->DefaultPostDropOffActivity = ESackboyActivity::Falling;
    this->LeftHandSocket = TEXT("hand_L_ledgegrab_socket");
    this->RightHandSocket = TEXT("hand_R_ledgegrab_socket");
    this->LeftHandForwardOffset = 0.10f;
    this->LeftHandVerticalOffset = -0.75f;
    this->RightHandForwardOffset = 0.10f;
    this->RightHandVerticalOffset = -0.75f;
    this->FrontFaceHandIKOffset = -0.30f;
    this->TopFaceHandIKOffset = -0.55f;
    this->GravityOffsetForwards = 0.25f;
    this->GravityOffsetUpwards = 0.00f;
    this->DebugCollision = false;
    this->DropOffOnOverlap = true;
    this->IgnoreSackboyOverlap = true;
    this->HandCheckRadius = 0.32f;
    this->LedgeGrabCapsuleRadius = 1.60f;
    this->LedgeGrabCapsuleHalfHeight = 3.75f;
    this->LedgeGrabHealthCapsuleRadius = 2.30f;
    this->LedgeGrabHealthCapsuleHalfHeight = 4.50f;
    this->ShimmyMaxSpeed = 32.00f;
}


