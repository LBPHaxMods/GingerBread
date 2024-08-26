#include "NonReplicatedPersistentPlayerData2.h"

FNonReplicatedPersistentPlayerData2::FNonReplicatedPersistentPlayerData2() {
    this->ChanceOfBonusLevelSpawn = 0.00f;
    this->bHasSpawnedBonusLevel = false;
    this->bCanSpawnBonusLevel = false;
    this->bHasFirstBonusLevelSpawned = false;
    this->bHasCompletedFirstBonusLevel = false;
    this->MostRecentlyVisitedWorldID = ELevelType::Himalaya;
    this->HasSeenInitialCutscene = false;
    this->TotalSecondsPlayed = 0;
}

