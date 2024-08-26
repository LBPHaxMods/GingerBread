#include "KillCamSequenceSettings.h"

FKillCamSequenceSettings::FKillCamSequenceSettings() {
    this->EnableDebugLogging = false;
    this->ZoomTimeDilation = 0.00f;
    this->ZoomTimeDilationDelay = 0.00f;
    this->ZoomDistance = 0.00f;
    this->ZoomCurve = NULL;
    this->TimeDilaionCurve = NULL;
    this->MaximumDeathDelay = 0.00f;
}

