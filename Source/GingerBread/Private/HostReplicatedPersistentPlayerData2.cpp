#include "HostReplicatedPersistentPlayerData2.h"

FHostReplicatedPersistentPlayerData2::FHostReplicatedPersistentPlayerData2() {
    this->bIsCostumeShopLocked = false;
    this->bIsKnittedKnightTrialLocked = false;
    this->RecentLevelConsecutivePlays = 0;
    this->RecentLevelTierAchived = ETrophy::DefaultZero;
    this->EndOfGameFlowState = EEndOfGameFlowState::Unknown;
    this->WorldMapPreviewArea = ELevelType::Himalaya;
    this->bUseBossPodPlatform = false;
    this->CostumesCollectedPercentage = 0;
    this->bUpdateWorldMapState = false;
    this->bIsValid = false;
}

