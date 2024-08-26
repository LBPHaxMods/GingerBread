#include "WorldMapFunctionLibrary.h"

UWorldMapFunctionLibrary::UWorldMapFunctionLibrary() {
}

bool UWorldMapFunctionLibrary::WasGeraldVisited(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const int32 GeraldID) {
    return false;
}

void UWorldMapFunctionLibrary::ToggleUnlockCameraArea(const UObject* WorldContextObject) {
}

bool UWorldMapFunctionLibrary::SyncHostReplicatedData(const UObject* WorldContextObject) {
    return false;
}

void UWorldMapFunctionLibrary::SyncDebugOrbCount(const UObject* WorldContextObject) {
}

FDataTableRowHandle UWorldMapFunctionLibrary::ShouldTriggerAutomaticZoneUnlock(const UObject* WorldContextObject, const ALevelBadge* Level, bool& bShouldUnlockZone) {
    return FDataTableRowHandle{};
}

void UWorldMapFunctionLibrary::SetZoneState(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const int32 ZoneID, const EZoneState NewState) {
}

void UWorldMapFunctionLibrary::SetWorldLocked(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const bool bLocked) {
}

void UWorldMapFunctionLibrary::SetTransitionCannonLocked(const UObject* WorldContextObject, const ELevelType WorldID, const bool bLocked) {
}

void UWorldMapFunctionLibrary::SetSpaceTransitionCannonLocked(const UObject* WorldContextObject, const bool bLocked) {
}

void UWorldMapFunctionLibrary::SetLevelState(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const int32 LevelID, const ELevelState NewState) {
}

void UWorldMapFunctionLibrary::SetCollectedOrbCount(const UObject* WorldContextObject, int32 TargetOrbCount) {
}

void UWorldMapFunctionLibrary::RefreshNewWorldPrompts(const UObject* WorldContextObject) {
}

void UWorldMapFunctionLibrary::MarkToyUsed(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const int32 ToyID) {
}

void UWorldMapFunctionLibrary::MarkGeraldVisited(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const int32 GeraldID) {
}

bool UWorldMapFunctionLibrary::IsZoneUnlocked(const UObject* WorldContextObject, const ELevelType WorldID, const int32 ZoneID, const bool bVerifyWorldLockState) {
    return false;
}

bool UWorldMapFunctionLibrary::IsWorldUnlockedByDefault(const UObject* WorldContextObject, const ELevelType WorldID) {
    return false;
}

bool UWorldMapFunctionLibrary::IsWorldMap(const UObject* WorldContextObject, FName MapName) {
    return false;
}

bool UWorldMapFunctionLibrary::IsValidWorldMapSpawnLocation(const UObject* WorldContextObject, const FVector& TargetLocation, TArray<AActor*>& IgnoredActors) {
    return false;
}

bool UWorldMapFunctionLibrary::IsValidPersistentLevelData(const FPersistentLevelData2& LevelSaveData) {
    return false;
}

bool UWorldMapFunctionLibrary::IsTransitionCannonLocked(const UObject* WorldContextObject, const ELevelType WorldID) {
    return false;
}

bool UWorldMapFunctionLibrary::IsSpaceTransitionCannonLocked(const UObject* WorldContextObject) {
    return false;
}

bool UWorldMapFunctionLibrary::IsNewWorldPromptVisible(const UObject* WorldContextObject) {
    return false;
}

bool UWorldMapFunctionLibrary::IsNewCostumesPromptVisible(const UObject* WorldContextObject) {
    return false;
}

bool UWorldMapFunctionLibrary::IsNetworkHostSackboyOnScreen(const UObject* WorldContextObject) {
    return false;
}

bool UWorldMapFunctionLibrary::IsNetworkHostKnittedKnightTrialsLocked(const UObject* WorldContextObject) {
    return false;
}

bool UWorldMapFunctionLibrary::IsNetworkHostCostumeShopLocked(const UObject* WorldContextObject) {
    return false;
}

bool UWorldMapFunctionLibrary::IsInWorldMapPreviewArea(const UObject* WorldContextObject) {
    return false;
}

bool UWorldMapFunctionLibrary::IsCostumeShopAvailable(const UObject* WorldContextObject) {
    return false;
}

bool UWorldMapFunctionLibrary::IsCameraTransitioningOrHostOffscreen(const UObject* WorldContextObject) {
    return false;
}

bool UWorldMapFunctionLibrary::IsAnyUnseenVoidLevel(const UObject* WorldContextObject) {
    return false;
}

bool UWorldMapFunctionLibrary::HasNetworkHostCompletedLevels(const UObject* WorldContextObject, const ELevelBadgeType BadgeType, const ELevelType WorldID, const int32 ZoneID) {
    return false;
}

bool UWorldMapFunctionLibrary::HasNetworkHostCompletedFirstRun(const UObject* WorldContextObject, const ELevelType WorldID, const int32 LevelID) {
    return false;
}

bool UWorldMapFunctionLibrary::HasNetworkHostCompletedALevelLeadingToAnotherZone(const UObject* WorldContextObject, const ELevelBadgeType BadgeType, const ELevelType WorldID, const int32 ZoneID) {
    return false;
}

bool UWorldMapFunctionLibrary::HasCompletedAllLevelsForCrown(const UObject* WorldContextObject) {
    return false;
}

FWorldMasterRow UWorldMapFunctionLibrary::GetWorldStaticDataFromID(const UObject* WorldContextObject, ELevelType WorldID, bool& bFound) {
    return FWorldMasterRow{};
}

FWorldMasterRow UWorldMapFunctionLibrary::GetWorldStaticData(const UObject* WorldContextObject, const FString& PersistentMapName, bool& bFound) {
    return FWorldMasterRow{};
}

ALevelBadge* UWorldMapFunctionLibrary::GetUnlockSourceLevel(const UObject* WorldContextObject) {
    return NULL;
}

void UWorldMapFunctionLibrary::GetUnlockCameraBehaviour(const UObject* WorldContextObject, ACameraArea*& TransitionCameraArea, ULevelUnlockCameraBehaviour*& TransitionBehaviour) {
}

ACameraArea* UWorldMapFunctionLibrary::GetUnlockCameraArea(const UObject* WorldContextObject) {
    return NULL;
}

int32 UWorldMapFunctionLibrary::GetToysCount(const UObject* WorldContextObject) {
    return 0;
}

void UWorldMapFunctionLibrary::GetParentLevelBadges(const UObject* WorldContextObject, const ELevelType ChildWorldID, const int32 ChildLevelID, TArray<ALevelBadge*>& ParentLevelBadges) {
}

int32 UWorldMapFunctionLibrary::GetNumUnseenVoidLevel(const UObject* WorldContextObject) {
    return 0;
}

int32 UWorldMapFunctionLibrary::GetNumUnlockedVoidLevels(const UObject* WorldContextObject) {
    return 0;
}

int32 UWorldMapFunctionLibrary::GetNetworkHostWorldVisitCount(const UObject* WorldContextObject, const ELevelType WorldID) {
    return 0;
}

TArray<ELevelType> UWorldMapFunctionLibrary::GetNetworkHostUnlockedWorlds(const UObject* WorldContextObject) {
    return TArray<ELevelType>();
}

int32 UWorldMapFunctionLibrary::GetNetworkHostTotalMemoryOrbsCollected(const UObject* WorldContextObject) {
    return 0;
}

TEnumAsByte<ETrophy::Type> UWorldMapFunctionLibrary::GetNetworkHostAchievedLevelTier(const UObject* WorldContextObject, const ELevelType WorldID, const int32 LevelID) {
    return ETrophy::DefaultZero;
}

FGlobalCompletionStats UWorldMapFunctionLibrary::GetNetworkGlobalCompletionStats(const UObject* WorldContextObject) {
    return FGlobalCompletionStats{};
}

FCombinedWorldStats UWorldMapFunctionLibrary::GetNetworkCombinedStatsForWorld(const UObject* WorldContextObject, const ELevelType WorldID) {
    return FCombinedWorldStats{};
}

int32 UWorldMapFunctionLibrary::GetMaximumMemoryOrbCount(const UObject* WorldContextObject) {
    return 0;
}

ELevelType UWorldMapFunctionLibrary::GetLocalHostLastVisitedWorld(const UObject* WorldContextObject) {
    return ELevelType::Himalaya;
}

FWorldLevelRow UWorldMapFunctionLibrary::GetLevelStaticDataFromID(const UObject* WorldContextObject, ELevelType WorldID, int32 LevelID, bool& bFound) {
    return FWorldLevelRow{};
}

FWorldLevelRow UWorldMapFunctionLibrary::GetLevelStaticData(const UObject* WorldContextObject, const FString& PersistentMapName, bool& bFound) {
    return FWorldLevelRow{};
}

ELevelState UWorldMapFunctionLibrary::GetLevelState(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const int32 LevelID) {
    return ELevelState::Locked;
}

void UWorldMapFunctionLibrary::GetLevelIDs(const UObject* WorldContextObject, const FString& MapName, ELevelType& WorldID, int32& LevelID, bool& bFound) {
}

ULevelCompletionSequence* UWorldMapFunctionLibrary::GetLevelCompletionSequence(const UObject* WorldContextObject) {
    return NULL;
}

int32 UWorldMapFunctionLibrary::GetGeraldsCount(const UObject* WorldContextObject) {
    return 0;
}

FWorldLevelRow UWorldMapFunctionLibrary::GetGameLevelStaticData(const UObject* WorldContextObject, bool& bFound) {
    return FWorldLevelRow{};
}

void UWorldMapFunctionLibrary::GetGameLevelIDs(const UObject* WorldContextObject, ELevelType& WorldID, int32& LevelID) {
}

TEnumAsByte<ETrophy::Type> UWorldMapFunctionLibrary::GetAchievedLevelTier(const UObject* WorldContextObject, const FPersistentLevelData2& LevelData) {
    return ETrophy::DefaultZero;
}

FPersistentLevelData2 UWorldMapFunctionLibrary::FindPersistentLevelDataForPlayerID(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const int32 LevelID) {
    return FPersistentLevelData2{};
}

FPersistentLevelData2 UWorldMapFunctionLibrary::FindNetworkHostPersistentLevelData(const UObject* WorldContextObject, const ELevelType WorldID, const int32 LevelID) {
    return FPersistentLevelData2{};
}

void UWorldMapFunctionLibrary::CollectPrizeBubble(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const ELevelType WorldID, const int32 LevelID, const int32 PrizeID) {
}

void UWorldMapFunctionLibrary::AwardAllMemoryOrbs(const UObject* WorldContextObject) {
}


