#include "SackboyJumpSettings.h"

FSackboyJumpSettings::FSackboyJumpSettings() {
    this->JumpDuration = 0.00f;
    this->JumpAntiGravScale = 0.00f;
    this->JumpDirectionSpeed = 0.00f;
    this->JumpDirectionLimitSpeedScale = 0.00f;
    this->JumpDirectionLimitAngle = 0.00f;
    this->JumpUpSpeed = 0.00f;
    this->JumpExitSpeed = 0.00f;
    this->JumpSteeringLockTime = 0.00f;
    this->JumpSteeringBlendTime = 0.00f;
    this->JumpSteeringLockScale = 0.00f;
    this->JumpDragDisabledLockTime = 0.00f;
    this->JumpDragDisabledBlendTime = 0.00f;
    this->JumptardTime = 0.00f;
    this->GrabbedVelocityFactor = 0.00f;
    this->GrabbedPrimitiveKickbackForce = 0.00f;
    this->CancelHorizontalVelocityOnStart = false;
    this->CancelVerticalVelocityOnStart = false;
    this->DisableCollisionUntilExitOverlap = false;
    this->DisableCollisionMinimumTime = 0.00f;
    this->UseStickInput = false;
    this->AccelerateCurrentVelocity = false;
    this->MinimumSpeedForVelocityDirectionJump = 0.00f;
    this->EnableSpeedLimiter = false;
    this->EnableInitialVelocity = false;
    this->ClampInitialVerticalSpeed = false;
    this->EnableAntiGrav = false;
    this->SnapInitialRotation = false;
    this->AutoJumpOnRelease = false;
    this->AllowGSPPInheritMomentum = false;
}

