#include "OffscreenTimeoutSettings.h"

FOffscreenTimeoutSettings::FOffscreenTimeoutSettings() {
    this->ScreenEdgeRespawnBehaviour = EScreenEdgeRespawnBehaviour::AlwaysRespawn;
    this->DynamicKillDistance = 0.00f;
    this->DynamicKillDirectionChangeSpeed = 0.00f;
    this->DynamicKillDirectionMaxSpeed = 0.00f;
    this->DynamicKillDirectionMinSpeed = 0.00f;
    this->bDisableTopScreenEdgeKill = false;
    this->bDisableBottomScreenEdgeKill = false;
    this->bDisableLeftScreenEdgeKill = false;
    this->bDisableRightScreenEdgeKill = false;
}

