#include "VehicleSettings.h"

FVehicleSettings::FVehicleSettings() {
    this->Type = EVehicleType::Seated;
    this->MaxSpeed = 0.00f;
    this->MinSpeed = 0.00f;
    this->BoostSpeed = 0.00f;
    this->SmallBoostSpeed = 0.00f;
    this->Acceleration = 0.00f;
    this->Deceleration = 0.00f;
    this->AirDeceleration = 0.00f;
    this->SidewaysDeceleration = 0.00f;
    this->MaxTurnSpeed = 0.00f;
    this->MaxTurnSpeedAtZero = 0.00f;
    this->MaxTurnSpeedBlendPower = 0.00f;
    this->BoostTurnSpeed = 0.00f;
    this->BoostDuration = 0.00f;
    this->BoostPower = 0.00f;
    this->BoostAcceleration = 0.00f;
    this->SmallBoostDuration = 0.00f;
    this->SmallBoostPower = 0.00f;
    this->SmallBoostAcceleration = 0.00f;
    this->MaxTurnAcceleration = 0.00f;
    this->Slidiness = 0.00f;
    this->RotationBlending = 0.00f;
    this->OverchargeDuration = 0.00f;
    this->JumpDuration = 0.00f;
    this->JumpBoostDuration = 0.00f;
    this->JumpInitialBoost = 0.00f;
    this->JumpFinalBoost = 0.00f;
    this->JumpBoostPower = 0.00f;
    this->JumpApexPower = 0.00f;
    this->JumpMaxPitch = 0.00f;
    this->JumpMinPitch = 0.00f;
    this->SeatMaintainsPitch = false;
    this->PrimaryExitVehicleForce = 0.00f;
    this->SecondaryExitVehicleForce = 0.00f;
    this->UseCharacterFaceingForExit = false;
    this->SackboyExitImpulse = 0.00f;
    this->DoesSupportPickup = false;
    this->HeadstompFallspeed = 0.00f;
    this->HeadstompInitialBounceSpeed = 0.00f;
    this->HeadstompFinalBounceSpeed = 0.00f;
    this->HeadstompBouncePower = 0.00f;
    this->HeadstompBounceDuration = 0.00f;
    this->BounceInitialSpeed = 0.00f;
    this->BounceFinalSpeed = 0.00f;
    this->BouncePower = 0.00f;
    this->BounceDuration = 0.00f;
    this->BounceSurfaceMinSpeed = 0.00f;
}

