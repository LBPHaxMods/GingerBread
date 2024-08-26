#include "ConfigSackboyThread.h"

UConfigSackboyThread::UConfigSackboyThread() {
    this->ThreadSearchRadius = 4.00f;
    this->TargetSelectionDelay = 0.25f;
    this->TargetSelectionMaxDistance = 5.00f;
    this->SameTargetAttachDelay = 0.25f;
    this->AimAttachRadius = 2.00f;
    this->NearAttachRadius = 2.00f;
    this->HeadFallCapsuleHeight = 3.00f;
    this->HeadAttachRadius = 2.50f;
    this->SackboyPullForceScale = 1.00f;
    this->SackboyPullMaxForce = 100.00f;
    this->SackboyGroundConstraintForceLimit = 0.50f;
    this->SackboyConstraintVelocityForceScale = 0.20f;
    this->ReelInDelay = 0.50f;
    this->ReelInRateCmS = 15.00f;
    this->ReelInMaxForce = 8.00f;
    this->SwingReelInRateCmS = 96.00f;
    this->SwingReelInMaxForce = 500.00f;
    this->JumpReelOutDistance = 8.00f;
    this->AirAttachReelOutDistance = 10.00f;
    this->PreparedThreadVisualLength = 5.00f;
    this->TugConstraintEnterThreshold = 5.00f;
    this->TugConstraintExitThreshold = 3.00f;
    this->TugConstraintExitDelay = 0.10f;
    this->TugBodyGripIndex = 2;
    this->TugBodyHandDistance = 1.50f;
    this->TugBodyHandSeparation = 1.80f;
    this->TugBodyHandHeightOffset = 0.90f;
    this->TugInputMaxForce = 4.00f;
    this->ShowPreparedThread = true;
    this->ShowSpindle = true;
    this->DebugThread = false;
    this->DebugDrawThreadTarget = true;
    this->DebugDrawThreadSearch = false;
    this->DebugShowConstraintForces = false;
    this->ClothSearchRadius = 4.00f;
    this->ClothProxyRadius = 1.00f;
    this->ClothProxyMass = 0.01f;
    this->ClothProxyLinDamp = 4.50f;
    this->ClothProxyAngDamp = 4.50f;
}


