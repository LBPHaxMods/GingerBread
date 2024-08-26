#include "ConfigSackboyPowerGlove.h"

UConfigSackboyPowerGlove::UConfigSackboyPowerGlove() {
    this->CatchPickupRange = 1.00f;
    this->PickupRetryMinimumTime = 1.00f;
    this->CarriedObjectVelocityOffset = 40.00f;
    this->CarrySocketHeightOffset = 1.36f;
    this->EnableLiftOffset = true;
    this->LiftRaiseDuration = 0.01f;
    this->LiftLowerDuration = 0.10f;
    this->LiftResetDelay = 0.40f;
    this->SackboyEnableHeavyCarryHandIK = false;
    this->ThrowDisabledCollisionDuration = 0.15f;
    this->ThrowAngularImpulse = 20.00f;
    this->LedgeGrabThrowSpeed = 100.00f;
    this->LedgeGrabImpulseDelay = 0.13f;
    this->LedgeGrabImpulseSpeed = 0.16f;
    this->CarriedEscapeUpForce = 1.50f;
    this->CarriedEscapeForwardForce = 0.50f;
    this->CarriedObjectRotationBlend = 0.25f;
    this->DropFromAttackSpeed = 80.00f;
    this->DropFromAttackVerticalSpeed = 48.00f;
    this->DropDisabledCollisionDuration = 0.20f;
    this->DropCollisionDistanceThreshold = 1.50f;
    this->PickupPreAnimDuration = 0.05f;
    this->PickupPrepareTimeLimit = 0.25f;
    this->PickupAnimDuration = 0.05f;
    this->PickupThrowAnimDuration = 0.25f;
    this->PickupFailAnimDuration = 1.20f;
    this->PickupDetachAnimDuration = 0.18f;
    this->RangedPickupThrowHeight = 15.00f;
    this->PickupThrowHeight = 10.00f;
    this->PickupThrowAngle = 25.00f;
    this->MinThrowSpeed = 80.00f;
    this->MaxThrowSpeed = 200.00f;
    this->ThrowSpeedStep = 10.00f;
    this->DefaultThrowSpeed = 124.00f;
    this->ManualAimPitchDeg = 68.00f;
    this->ManualAimDefaultOffset = 42.00f;
    this->ManualAimDefaultOffsetBlend = 0.80f;
    this->ThrownObjectDampingOverrideTime = 1.00f;
    this->ArcDisplayThickness = 0.30f;
    this->bDebugPreviewCentreOfMassArc = false;
    this->bRenderHipCarrySocket = false;
    this->ThrowDuration = 0.43f;
    this->CarryJitterMinTime = 0.00f;
    this->CarryJitterMaxTime = 0.00f;
    this->CarryJitterMaxAngle = 0.00f;
    this->CarryJitterSlerpRatio = 0.00f;
}


