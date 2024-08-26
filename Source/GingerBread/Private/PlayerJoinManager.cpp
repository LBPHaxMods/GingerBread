#include "PlayerJoinManager.h"

UPlayerJoinManager::UPlayerJoinManager() {
    this->LoadSaveFailInterface = NULL;
}

void UPlayerJoinManager::OnSubLevelResetStart(ULevel* sub_level, FName package_name) {
}

void UPlayerJoinManager::OnSubLevelResetFinish(ULevel* sub_level, FName package_name) {
}

void UPlayerJoinManager::OnPreLoadMap(const FString& Name) {
}

void UPlayerJoinManager::OnPreClientTravel(const FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel) {
}

void UPlayerJoinManager::OnPostLoadMap(UWorld* World) {
}

void UPlayerJoinManager::OnPIEGameStarting() {
}

void UPlayerJoinManager::OnPIEGameStarted() {
}

void UPlayerJoinManager::OnLevelStreamStart(const FName& Name) {
}

void UPlayerJoinManager::OnLevelStreamManagerCreated(AActor* lsm_actor) {
}

void UPlayerJoinManager::OnLevelStreamFinish(const FName& Name) {
}

void UPlayerJoinManager::OnLevelResetManagerCreated(AActor* lrm_actor) {
}

void UPlayerJoinManager::OnGameStateCreated(AGingerbreadGameState* State) {
}

void UPlayerJoinManager::GetSublevelInitialPlayerCount(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& SublevelName, int32& InitialPlayerCount) {
}

void UPlayerJoinManager::GetPlayerJoinLeaveEvents(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FGingerbreadPlayerId& Player, EPlayerJoinDirection& Direction) {
}

int32 UPlayerJoinManager::GetCurrentSackboyCount() const {
    return 0;
}

int32 UPlayerJoinManager::GetCurrentPlayersJoinedGameCount() const {
    return 0;
}

TArray<FGingerbreadPlayerId> UPlayerJoinManager::GetCurrentPlayersJoinedGame() const {
    return TArray<FGingerbreadPlayerId>();
}

int32 UPlayerJoinManager::GetCurrentLocalPlayersCount() const {
    return 0;
}

TArray<FGingerbreadPlayerId> UPlayerJoinManager::GetCurrentLocalPlayers() const {
    return TArray<FGingerbreadPlayerId>();
}


