#include "LevelCompletionResult.h"

FLevelCompletionResult::FLevelCompletionResult() {
    this->MemoryOrbsCollected = 0;
    this->NewMemoryOrbCount = 0;
    this->bCompletedFirstRun = false;
    this->bVoidEnergyCollected = false;
    this->bPreviouslyCompletedInMultiplayer = false;
    this->bCompletedInMultiplayer = false;
    this->bPreviouslyAced = false;
    this->bAced = false;
    this->PreviousHiScore = 0;
    this->HiScore = 0;
}

