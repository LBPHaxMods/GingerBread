#include "PersistentLevelData2.h"

FPersistentLevelData2::FPersistentLevelData2() {
    this->WorldID = ELevelType::Himalaya;
    this->LevelID = 0;
    this->LevelState = ELevelState::Locked;
    this->bAced = false;
    this->bAcedInMultiplayer = false;
    this->bCollectedAllCollectabells = false;
    this->bVoidEnergyCollected = false;
    this->CompletedInSinglePlayer = 0;
    this->CompletedInMultiplayer = 0;
    this->HiScore = 0;
    this->bEverPlayed = false;
    this->PowerPinCompletionFlags = 0;
    this->VisitCount = 0;
    this->BossVisitCount = 0;
    this->BossDefeatedCount = 0;
    this->LevelLocationID = 0;
}

