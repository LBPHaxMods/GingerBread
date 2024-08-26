#include "WorldLevelRow.h"

FWorldLevelRow::FWorldLevelRow() {
    this->WorldID = ELevelType::Himalaya;
    this->WorldStyle = ELevelType::Himalaya;
    this->BadgeType = ELevelBadgeType::Main;
    this->SaveSlotId = ImageSetId::First;
    this->UnlockedWorld = ELevelType::Himalaya;
    this->MemoryOrbs = NULL;
    this->PrizeBubbles = NULL;
    this->RequiredOrbCount = 0;
    this->bRequiresCostumeShopVisit = false;
    this->LockDurationSeconds = 0;
    this->MinimumPlayerCount = 0;
    this->bUnlockedByDefault = false;
    this->bEnabledInURBuild = false;
    this->bShouldThisBonusLevelSpawnOnUnlock = false;
    this->bIsPreviewLevel = false;
    this->bIsTournamentLevel = false;
    this->AccountancyWorldID = ELevelType::Himalaya;
    this->bCanSpawnBonusLevelUponFirstCompletion = false;
    this->bPanCameraIfZoneIsLocked = false;
    this->WorldMapMusicMode = EWorldMapMusicMode::Normal;
}

