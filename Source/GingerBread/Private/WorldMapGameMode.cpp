#include "WorldMapGameMode.h"

AWorldMapGameMode::AWorldMapGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelCompletionSequence = NULL;
    this->CurrentWorldID = ELevelType::None;
    this->bIsEnteringGameLevel = false;
    this->CurrentState = EWorldMapGameModeState::WaitForRegistrar;
    this->bSplashTransitionScreenVisible = false;
    this->GameInstance = NULL;
    this->ActiveDebugMenu = NULL;
    this->WorldMapGameState = NULL;
    this->Registrar = NULL;
    this->WorldDebugMenu = NULL;
    this->StartingSpawnPoint = NULL;
}

void AWorldMapGameMode::ShowTransitionScreen() {
}

void AWorldMapGameMode::PopulateNotifications() {
}

void AWorldMapGameMode::OnHostDataSaveDataReady() {
}

void AWorldMapGameMode::LockLevels(int32 ZoneID) {
}

bool AWorldMapGameMode::IsZoneLocked(const int32 ZoneID) const {
    return false;
}

bool AWorldMapGameMode::IsLevelUnlocked(const int32 LevelID) const {
    return false;
}

bool AWorldMapGameMode::IsLevelLocked(const int32 LevelID) const {
    return false;
}

bool AWorldMapGameMode::HasUnlockedRemixInDifferentWorld(ELevelType& OtherWorldID) const {
    return false;
}

bool AWorldMapGameMode::HasJustUnlockedLevelType(ELevelBadgeType LevelType, FWorldLevelRow& OutLevelRow) const {
    return false;
}

ELevelType AWorldMapGameMode::GetWorldID() const {
    return ELevelType::Himalaya;
}

UScreenTransitionsHUDComponent* AWorldMapGameMode::GetTransitionScreen() const {
    return NULL;
}

bool AWorldMapGameMode::GetStaticDataFromID(int32 LevelID, FWorldLevelRow& StaticData) const {
    return false;
}

AWorldMapPod* AWorldMapGameMode::GetPodActor() const {
    return NULL;
}

UTexture* AWorldMapGameMode::GetLevelThumbnail(const FName ThumbnailID) {
    return NULL;
}

void AWorldMapGameMode::GetLevelIDs(const FName& MapName, ELevelType& WorldID, ELevelType& WorldStyle, int32& LevelID, bool& bFound) {
}

ALevelBadge* AWorldMapGameMode::GetGameLevelBadge() const {
    return NULL;
}

void AWorldMapGameMode::GetBadgeFromRow(const FDataTableRowHandle& Row, ALevelBadge*& LevelBadge, FWorldLevelRow& LevelData) const {
}

ALevelBadge* AWorldMapGameMode::GetBadgeByID(int32 LevelID) const {
    return NULL;
}

void AWorldMapGameMode::DismissTransitionScreen() {
}

bool AWorldMapGameMode::CanLevelLaunch(const int32 LevelID) const {
    return false;
}


