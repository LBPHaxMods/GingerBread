#include "TelemetryManager.h"

UTelemetryManager::UTelemetryManager() {
    this->CVManager = NULL;
}

void UTelemetryManager::OnUserProfileTimer() {
}

void UTelemetryManager::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void UTelemetryManager::OnInitTimer() {
}

void UTelemetryManager::GetZoneUnlockMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out) {
}

void UTelemetryManager::GetWorldUnlockMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out) {
}

void UTelemetryManager::GetVoidEnergyFound(const FLoadSaveData& lsd, int32& value_out) {
}

void UTelemetryManager::GetUnlockedZones(const FLoadSaveData& lsd, int32& value_out) {
}

void UTelemetryManager::GetUnlockedWorlds(const FLoadSaveData& lsd, int32& value_out) {
}

void UTelemetryManager::GetUnlockedLevels(const FLoadSaveData& lsd, int32& value_out) {
}

void UTelemetryManager::GetMemoryOrbsFound(const FLoadSaveData& lsd, int32& value_out) {
}

void UTelemetryManager::GetLevelUnlockMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out) {
}

void UTelemetryManager::GetLevelsMasteredMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out) {
}

void UTelemetryManager::GetLevelsMastered(const FLoadSaveData& lsd, int32& value_out) {
}

void UTelemetryManager::GetLevelsFinishedSinglePlayerMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out) {
}

void UTelemetryManager::GetLevelsFinishedMultiplayerMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out) {
}

void UTelemetryManager::GetLevelsCompletedSinglePlayer(const FLoadSaveData& lsd, int32& value_out) {
}

void UTelemetryManager::GetLevelsCompletedMultiplayer(const FLoadSaveData& lsd, int32& value_out) {
}

void UTelemetryManager::GetLevelsCompleted(const FLoadSaveData& lsd, int32& value_out) {
}

void UTelemetryManager::GetLevelsAllPrizesMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out) {
}

void UTelemetryManager::GetLevelsAcedMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out) {
}

void UTelemetryManager::GetCollectabellsCollected(const FLoadSaveData& lsd, int32& value_out) {
}


