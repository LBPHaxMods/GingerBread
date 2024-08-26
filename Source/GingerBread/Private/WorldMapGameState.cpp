#include "WorldMapGameState.h"

AWorldMapGameState::AWorldMapGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelCompletionSequence = NULL;
    this->GameInstance = NULL;
}

void AWorldMapGameState::LockLevels(int32 ZoneID) {
}

bool AWorldMapGameState::IsZoneLocked(const int32 ZoneID) const {
    return false;
}

bool AWorldMapGameState::IsLevelUnlocked(const int32 LevelID) const {
    return false;
}

bool AWorldMapGameState::IsLevelLocked(const int32 LevelID) const {
    return false;
}

bool AWorldMapGameState::GetStaticDataFromID(int32 LevelID, FWorldLevelRow& StaticData) const {
    return false;
}

AWorldMapPod* AWorldMapGameState::GetPodActor() const {
    return NULL;
}

ALevelBadge* AWorldMapGameState::GetGameLevelBadge() const {
    return NULL;
}

void AWorldMapGameState::GetBadgeFromRow(const FDataTableRowHandle& Row, ALevelBadge*& LevelBadge, FWorldLevelRow& LevelData) const {
}

ALevelBadge* AWorldMapGameState::GetBadgeByID(int32 LevelID) const {
    return NULL;
}

bool AWorldMapGameState::CanLevelLaunch(const int32 LevelID) const {
    return false;
}


