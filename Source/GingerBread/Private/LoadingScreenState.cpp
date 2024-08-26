#include "LoadingScreenState.h"

FLoadingScreenState::FLoadingScreenState() {
    this->TotalOrbs = 0;
    this->CollectedVoidEnergy = false;
    this->HasVoidEnergy = false;
    this->NumPrizesCollected = 0;
    this->TotalPrizes = 0;
    this->IsAced = false;
    this->HasCompleted = false;
    this->CompletedMultiplayer = false;
    this->LevelScore = 0;
    this->BronzeScore = 0;
    this->SilverScore = 0;
    this->GoldScore = 0;
    this->ScoreIsTime = false;
    this->BronzeRewardType = ELevelRewardType::Collectabell;
    this->SilverRewardType = ELevelRewardType::Collectabell;
    this->GoldRewardType = ELevelRewardType::Collectabell;
    this->IsMastered = false;
    this->WorldType = ELevelType::Himalaya;
    this->LevelType = ELevelBadgeType::Main;
}

