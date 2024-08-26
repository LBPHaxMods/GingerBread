#include "ConfigSackboyBounceDefaults.h"

UConfigSackboyBounceDefaults::UConfigSackboyBounceDefaults() {
    this->BounceSpeed = 76.00f;
    this->RollDiveBounceSpeed = 64.00f;
    this->LedgeGrabBounceSpeed = 64.00f;
    this->MaxTimeToEnableBounceAtBegin = 5.00f;
    this->InAirBounceFallSpeed = 0.00f;
    this->BounceDelay = 0.02f;
    this->BounceDuration = 0.06f;
    this->EnemyBounceInitialSpeed = 224.00f;
    this->EnemyBounceHighInitialSpeed = 288.00f;
    this->EnemyBounceLowInitialSpeed = 112.00f;
    this->SackboyBounceInitialSpeed = 116.00f;
    this->EnemyBounceVeryLowInitialSpeed = 48.00f;
    this->EnemyBounceExtremelyLowInitialSpeed = 32.00f;
    this->EnemyBounceFinalSpeed = 56.00f;
    this->EnemyBounceExtremelyLowFinalSpeed = 12.00f;
    this->BouncePower = 0.62f;
    this->BouncePadAirSteerRestricted = 0.25f;
    this->MinSurfaceSpeed = 24.00f;
    this->MinSurfaceSpeedOffFlaglines = 40.00f;
    this->InAirVelocityRestrictionTime = 0.25f;
    this->InAirVelocityRestrictionLongTime = 0.50f;
    this->InAirVelocityRestrictionPower = 2.00f;
    this->DyingSackboyGetsRandomBounce = true;
}


