#include "TelemetrySettings.h"

FTelemetrySettings::FTelemetrySettings() {
    this->Active = false;
    this->TrackedValueTimerPeriod = 0.00f;
    this->EnableSettingDLCCart = false;
    this->EnableSettingDLCEntitlements = false;
    this->EnableSettingDLCProducts = false;
    this->EnableSettingDLCItems = false;
    this->StartupDelay = 0.00f;
    this->InitDelay = 0.00f;
    this->InitRetries = 0;
    this->OngoingDelay = 0.00f;
    this->UserProfileDelay = 0.00f;
    this->HeartbeatPeriod = 0.00f;
}

