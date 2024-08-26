#include "SackboyDeathSettings.h"

FSackboyDeathSettings::FSackboyDeathSettings() {
    this->InstantDeath = false;
    this->InstantPop = false;
    this->DeathReason = ESackboyDeathReason::KillFloor;
}

