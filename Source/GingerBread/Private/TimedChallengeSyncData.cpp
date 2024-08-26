#include "TimedChallengeSyncData.h"

FTimedChallengeSyncData::FTimedChallengeSyncData() {
    this->ServerTimeOfSync = 0.00f;
    this->SyncedElapsedTime = 0.00f;
    this->bTicking = false;
}

