#include "ConfigSackboyHitReactionsDefaults.h"

UConfigSackboyHitReactionsDefaults::UConfigSackboyHitReactionsDefaults() {
    this->DebugReactions = false;
    this->GlobalForceRecoverTimer = 4.00f;
    this->SlideDragFactor = 0.01f;
    this->StoppingDragFactor = 0.10f;
    this->EmotionalStateTime = 4.00f;
    this->DamageCooldown = 2.00f;
    this->RecoveryAttemptTimeout = 2.00f;
    this->SuccessiveDazeMonitoringEnabled = true;
    this->SuccessiveDazeLimit = 32;
    this->CameraSplatChance = 0.10f;
    this->CameraSplatEnabled = true;
    this->CameraSplatMaxImpactAngle = 60.00f;
    this->CameraSplatFlightDisablesCollision = true;
    this->CameraSplatFlightDuration = 0.30f;
    this->CameraSplatNearPlane = 16.00f;
    this->CameraSplatWipeDistance = 10.00f;
    this->CameraSplatWipeDuration = 1.50f;
    this->SlappedToyDropSpeed = 45.00f;
    this->DamagedToyDropSpeed = 96.00f;
    this->MinSprintRollDazeTime = 0.25f;
    this->KnockBackDelay = 0.20f;
    this->MinSprintRollDazeSpeed = 24.00f;
    this->MinFlyingRollDazeSpeed = 48.00f;
    this->RiderSideMultiplier = 0.30f;
    this->RollDiveKnockbackForceMultiplier = 0.20f;
    this->UnflattenRaycastLength = 10.00f;
    this->FlattenGroundRaylength = 30.00f;
    this->FlattenShrinkDuration = 0.50f;
    this->FlattenExtraGravityFactor = 1.00f;
    this->MinSpeedToTransferReaction = 15.00f;
    this->MeduimPhysicsObjectHitSpeedThreshold = 10.00f;
    this->LargePhysicsObjectHitSpeedThreshold = 25.00f;
    this->MinPhysicsObjectHitSpeedThreshold = 5.00f;
    this->DrowningSpring = 4.00f;
    this->DrowningDampening = 0.01f;
    this->DrowningSpeedLimit = 24.00f;
    this->RepulseAntiGravDelay = 0.30f;
    this->RepulseAntiGravCurve = NULL;
    this->RepulseHighAntiGravDelay = 0.30f;
    this->RepulseHighAntiGravCurve = NULL;
}


