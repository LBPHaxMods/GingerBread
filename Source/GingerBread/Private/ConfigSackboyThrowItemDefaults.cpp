#include "ConfigSackboyThrowItemDefaults.h"

UConfigSackboyThrowItemDefaults::UConfigSackboyThrowItemDefaults() {
    this->PowerTimeLimits.AddDefaulted(4);
    this->CraftCutterPowerTimeLimit = 0.50f;
    this->BlasterPulseDelay = 0.00f;
    this->BlastersTargetingMaxDistance = 100.00f;
    this->BlastersTargetingMaxDistanceEsports = 150.00f;
    this->BlastersTargetingMaxAngle = 20.00f;
    this->BlastersTargetingMaxHeight = 16.00f;
    this->BlastersTargetingMinHeight = -8.00f;
    this->BlastersTargetingForwardOffset = -10.00f;
    this->BlastersTargetingExclusionDistance = 10.00f;
    this->WeaponThrowExitDuration = 0.25f;
    this->BlastersPreThrowDelayDuration = 0.07f;
    this->BlastersThrowKnockBackInitialSpeed = 80.00f;
    this->BlastersThrowKnockBackExitSpeed = 0.00f;
    this->BlastersThrowKnockBackInitialUpSpeed = 0.00f;
    this->BlastersThrowKnockBackExitUpSpeed = 0.00f;
    this->BlastersThrowKnockBackHorizontalPow = 0.25f;
    this->BlastersThrowKnockBackVerticalPow = 0.50f;
    this->BlastersThrowExitDuration = 0.35f;
    this->BlastersInAirThrowKnockBackInitialSpeed = 120.00f;
    this->BlastersInAirThrowKnockBackExitSpeed = 10.00f;
    this->BlastersInAirThrowKnockBackInitialUpSpeed = 0.00f;
    this->BlastersInAirThrowKnockBackExitUpSpeed = 35.00f;
    this->BlastersInAirThrowKnockBackHorizontalPow = 0.25f;
    this->BlastersInAirThrowKnockBackVerticalPow = 1.50f;
    this->BlastersInAirThrowExitDuration = 0.30f;
    this->BlastersMinChargeDuration = 0.08f;
    this->TriggerAnotherThrowTime = 0.40f;
    this->CraftCutterImpactDelay = 0.03f;
    this->CraftCutterThrownDelay = 0.34f;
    this->QuickThrowDuration = 0.05f;
    this->ImpactDelay = 0.03f;
    this->QuickThrowExitDuration = 0.25f;
    this->ThrowCraftCutterWalkTime = 0.25f;
    this->SetDirectionPrepareTime = 0.06f;
    this->ThrowBreakOutTime = 0.25f;
    this->PrepareDuration = 0.01f;
    this->RollThrowPrepareDuration = 0.25f;
    this->HoldCraftCutterTime = 0.25f;
    this->StopDelayDuration = 0.15f;
    this->TimeToStop = 0.20f;
    this->InAirThrowDelay = 0.40f;
    this->ThrowHoverTime = 0.22f;
    this->ThrowHoverDragPower = 0.25f;
    this->ThrowHoverInitialDrag = 0.50f;
    this->ThrowHoverFinalDrag = 0.06f;
    this->ThrowExitSpeedLimit = 34.00f;
    this->ThrowDashDuration = 0.25f;
    this->ThrowDashInitialSpeed = 128.00f;
    this->ThrowDashFinalSpeed = 12.00f;
    this->ThrowDashPower = 0.90f;
    this->DropToyStrength = 70.00f;
    this->ThrowToyTargetingMaxDistance = 64.00f;
    this->ThrowToyTargetingMaxAngle = 32.00f;
    this->ThrowToyTargetingMaxHeight = 16.00f;
    this->ThrowToyTargetingMinHeight = -8.00f;
    this->ThrowToyTargetingForwardOffset = -10.00f;
    this->ThrowToyTargetingExclusionDistance = 4.00f;
    this->InfiniteThrowsInAir = true;
    this->ShowDebug = false;
}


