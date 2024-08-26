#include "ConfigSackboyGrabConveyorDefaults.h"

UConfigSackboyGrabConveyorDefaults::UConfigSackboyGrabConveyorDefaults() {
    this->InterpolationFollowBelt = true;
    this->InterpolationUnitsPerSecond = 45.00f;
    this->InterpolationDegreesPerSecond = 625.00f;
    this->StickDeadzone = 0.20f;
    this->InheritedVelocityScalar = 1.00f;
    this->JumpAngularLimit = 30.00f;
    this->StickVelocityScalar = 1.20f;
    this->NoStickVelocityScalar = 1.20f;
    this->WorldUpVelocity = 0.25f;
    this->DelayedJumpWindow = 0.20f;
    this->LeanBlendSpeed = 8.50f;
    this->CapsuleCorrectionRotationSpeed = 250.00f;
    this->LeanAngle = 80.00f;
    this->HandIKThreshold = 0.20f;
    this->DelyaedReEnterTime = 0.35f;
    this->DebugDrawBeltTransform = false;
    this->DebugDrawControlRotationAxis = false;
    this->DebugDrawStickInput = false;
}


