#include "DebugLevelData.h"

FDebugLevelData::FDebugLevelData() {
    this->bEnabled = false;
    this->bGenerateBefore = false;
    this->bAced = false;
    this->CompletedInSinglePlayer = 0;
    this->CompletedInMultiplayer = 0;
    this->HiScore = 0;
    this->bEverPlayed = false;
    this->bVoidEnergyCollected = false;
}

