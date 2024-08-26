#include "PlayerFunctionLibrary.h"

UPlayerFunctionLibrary::UPlayerFunctionLibrary() {
}

bool UPlayerFunctionLibrary::ShouldMemoryOrbBeGhostedForCurrentLevel(const UObject* WorldContextObject, const FDataTableRowHandle& RowHandle) {
    return false;
}

void UPlayerFunctionLibrary::SetVoidEnergyCollected(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, bool bIsCollected) {
}

void UPlayerFunctionLibrary::SetSackboysHidden(UObject* WorldContextObject, bool Hide) {
}

bool UPlayerFunctionLibrary::NotEqual_FGingerbreadPlayerId(const FGingerbreadPlayerId& A, const FGingerbreadPlayerId& B) {
    return false;
}

bool UPlayerFunctionLibrary::IsValidGingerbreadPlayerID(const FGingerbreadPlayerId& PlayerId) {
    return false;
}

bool UPlayerFunctionLibrary::IsPlayerIdValid(UObject* WorldContextObject, FGingerbreadPlayerId PlayerId) {
    return false;
}

bool UPlayerFunctionLibrary::IsLocalSystemUnderPerforming(const UObject* WorldContextObject) {
    return false;
}

void UPlayerFunctionLibrary::HandleDroppingToys(const FAllowedToys& AllowedToys, ASackboy* Sackboy) {
}

int32 UPlayerFunctionLibrary::GetUniqueSpawnedPlayerCount(UObject* WorldContextObject) {
    return 0;
}

void UPlayerFunctionLibrary::GetSpawningPlayerCounts(const UObject* WorldContextObject, int32& LivingPlayerCount, int32& SpawningPlayerCount, int32& DeadPlayerCount) {
}

void UPlayerFunctionLibrary::GetSackBoys(const UObject* WorldContextObject, TArray<ASackboy*>& Sackboys, bool OnlyAlive) {
}

ASackboy* UPlayerFunctionLibrary::GetSackboyFromPlayerId(const UObject* WorldContextObject, FGingerbreadPlayerId PlayerId) {
    return NULL;
}

FGingerbreadPlayerId UPlayerFunctionLibrary::GetPlayerIdFromSackboy(const UObject* WorldContextObject, const ASackboy* Sackboy) {
    return FGingerbreadPlayerId{};
}

int32 UPlayerFunctionLibrary::GetPlayerCount(const UObject* WorldContextObject) {
    return 0;
}

void UPlayerFunctionLibrary::GetPlayerControllersSortedByID(UObject* WorldContextObject, TArray<AGingerbreadPlayerController*>& GingerbreadPlayerControllers) {
}

void UPlayerFunctionLibrary::GetPlayerControllers(UObject* WorldContextObject, TArray<AGingerbreadPlayerController*>& GingerbreadPlayerControllers) {
}

AGingerbreadPlayerController* UPlayerFunctionLibrary::GetPlayerControllerFromPlayerId(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId) {
    return NULL;
}

ASackboy* UPlayerFunctionLibrary::GetNetworkHostSackboy(const UObject* WorldContextObject) {
    return NULL;
}

void UPlayerFunctionLibrary::GetNetworkHostGingerbreadPlayerID(const UObject* WorldContextObject, FGingerbreadPlayerId& PlayerId, bool& bFound) {
}

AGingerbreadPlayerController* UPlayerFunctionLibrary::GetNetworkHostGingerbreadPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

ASackboy* UPlayerFunctionLibrary::GetLocalHostSackboy(const UObject* WorldContextObject) {
    return NULL;
}

void UPlayerFunctionLibrary::GetLivingPlayerCounts(const UObject* WorldContextObject, int32& LivingPlayerCount, int32& TetherPlayerCount, int32& DeadPlayerCount) {
}

int32 UPlayerFunctionLibrary::GetLeadPlayerIndex(UObject* WorldContextObject) {
    return 0;
}

AGingerbreadPlayerController* UPlayerFunctionLibrary::GetLeadPlayer(UObject* WorldContextObject) {
    return NULL;
}

void UPlayerFunctionLibrary::GetLastManStandingValues(const UObject* WorldContextObject, int32& MaxLives, int32& CurrentLives, int32& NumPlayers, int32& LivePlayers) {
}

void UPlayerFunctionLibrary::GetGingerbreadPlayerIDs(const UObject* WorldContextObject, TArray<FGingerbreadPlayerId>& PlayerIDs, bool bIncludeNotJoinedPlayers) {
}

int32 UPlayerFunctionLibrary::GetExistingSackboyCount(const UObject* WorldContextObject) {
    return 0;
}

TArray<FGingerbreadPlayerId> UPlayerFunctionLibrary::GetCurrentPlayersSortByPlayerSlot(const UObject* WorldContextObject) {
    return TArray<FGingerbreadPlayerId>();
}

int32 UPlayerFunctionLibrary::GetConnectedPlayerCount(const UObject* WorldContextObject) {
    return 0;
}

void UPlayerFunctionLibrary::FlushLocalPlayerControls(const UObject* WorldContextObject) {
}

void UPlayerFunctionLibrary::FindSackboys(const UObject* WorldContextObject, TArray<ASackboy*>& Sackboys, ESackboyQuery Query) {
}

FVector UPlayerFunctionLibrary::FilterMotionInput(const FVector& MotionVectorInput, FVector& FilterRef, const float FilterThreshold, const float DeadZone, bool DeadZoneSize, float Smoothing) {
    return FVector{};
}

bool UPlayerFunctionLibrary::EqualEqual_FGingerbreadPlayerId(const FGingerbreadPlayerId& A, const FGingerbreadPlayerId& B) {
    return false;
}


