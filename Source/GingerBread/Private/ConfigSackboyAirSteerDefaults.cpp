#include "ConfigSackboyAirSteerDefaults.h"

UConfigSackboyAirSteerDefaults::UConfigSackboyAirSteerDefaults() {
    this->WindVelocityDampening = 0.05f;
    this->EnemyBounceVerticalDrag = 0.04f;
    this->TimeToStopFromSprint = 0.08f;
    this->InWindTimeToStopFromSprint = 0.50f;
    this->TurnCurve = NULL;
    this->MinAirSteerSpeed = 16.00f;
    this->StandingAirSteerBoost = 36.00f;
    this->SprintingAirSteerBoost = 36.00f;
    this->MinAirSteerTime = 0.50f;
    this->MinAirSteerPogostickTime = 0.25f;
    this->MinBoostAirSteerTime = 0.50f;
    this->ExtraDragSpeedThreshold = 29.00f;
    this->InitialExtraDrag = 0.02f;
    this->LaterExtraDrag = 0.04f;
    this->LaterExtraDragSpeed = 40.00f;
    this->FasterExtraDragSpeedThreshold = 27.00f;
    this->FasterInitialExtraDrag = 0.07f;
    this->FasterLaterExtraDrag = 0.10f;
    this->FasterLaterExtraDragSpeed = 40.00f;
    this->MaintainVelocityFactor = 1.00f;
    this->MaintainVelocityTimeThreshold = 0.09f;
    this->AimStompVelocityProportion = 0.40f;
    this->AimStompMinDistance = 2.50f;
    this->AimStompVelocityReductionProportion = 0.50f;
    this->AimStompSpeedReduction = 12.00f;
    this->AimStompVelocityIncreaseProportion = 1.25f;
    this->AimStompSpeedIncrease = 12.00f;
    this->AimStompMaxSpeed = 40.00f;
    this->AirStompMaxSidewaysMovement = 4.00f;
    this->EnemyJumpStompTargettingMultiplier = 2.00f;
}


