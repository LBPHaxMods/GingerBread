#include "ConfigSackboyInputDefaults.h"

UConfigSackboyInputDefaults::UConfigSackboyInputDefaults() {
    this->CentralDeadZone = 0.40f;
    this->DeadZoneAtMaxStick = 0.12f;
    this->DeadZoneAtZero = 0.00f;
    this->MaxStickThreshold = 0.96f;
    this->DeadZoneOutput = 0.10f;
    this->FollowingDistance = 33.00f;
    this->TrackingResetAngle = 8.00f;
}


