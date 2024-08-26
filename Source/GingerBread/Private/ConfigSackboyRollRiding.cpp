#include "ConfigSackboyRollRiding.h"

UConfigSackboyRollRiding::UConfigSackboyRollRiding() {
    this->HopOnHeightOffset = 5.00f;
    this->HopSpeed = 64.00f;
    this->HopSpeedLimit = 24.00f;
    this->HopExtraGravity = 2.00f;
    this->RidingCollisionHeight = 2.75f;
    this->RidingCollisionRadius = 2.00f;
    this->HopOffSpeed = 50.00f;
    this->HorizontalHopBoost = 2.35f;
    this->HorizontalHopBoostOffJumper = 2.05f;
    this->VerticalHopBoostOffJumper = 48.00f;
    this->GetOffJumpVelMultiplier = 1.10f;
    this->GetOffJumperTime = 0.05f;
    this->CountDownToPostExit = 0.10f;
}


