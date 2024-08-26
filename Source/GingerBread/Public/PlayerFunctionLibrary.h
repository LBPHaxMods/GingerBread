#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "AllowedToys.h"
#include "ESackboyQuery.h"
#include "GingerbreadPlayerId.h"
#include "PlayerFunctionLibrary.generated.h"

class AGingerbreadPlayerController;
class ASackboy;
class UObject;

UCLASS(Blueprintable)
class UPlayerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayerFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShouldMemoryOrbBeGhostedForCurrentLevel(const UObject* WorldContextObject, const FDataTableRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVoidEnergyCollected(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, bool bIsCollected);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSackboysHidden(UObject* WorldContextObject, bool Hide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_FGingerbreadPlayerId(const FGingerbreadPlayerId& A, const FGingerbreadPlayerId& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidGingerbreadPlayerID(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerIdValid(UObject* WorldContextObject, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalSystemUnderPerforming(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void HandleDroppingToys(const FAllowedToys& AllowedToys, ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetUniqueSpawnedPlayerCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSpawningPlayerCounts(const UObject* WorldContextObject, int32& LivingPlayerCount, int32& SpawningPlayerCount, int32& DeadPlayerCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSackBoys(const UObject* WorldContextObject, TArray<ASackboy*>& Sackboys, bool OnlyAlive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASackboy* GetSackboyFromPlayerId(const UObject* WorldContextObject, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGingerbreadPlayerId GetPlayerIdFromSackboy(const UObject* WorldContextObject, const ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlayerCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerControllersSortedByID(UObject* WorldContextObject, TArray<AGingerbreadPlayerController*>& GingerbreadPlayerControllers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerControllers(UObject* WorldContextObject, TArray<AGingerbreadPlayerController*>& GingerbreadPlayerControllers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGingerbreadPlayerController* GetPlayerControllerFromPlayerId(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASackboy* GetNetworkHostSackboy(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetNetworkHostGingerbreadPlayerID(const UObject* WorldContextObject, FGingerbreadPlayerId& PlayerId, bool& bFound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGingerbreadPlayerController* GetNetworkHostGingerbreadPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASackboy* GetLocalHostSackboy(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLivingPlayerCounts(const UObject* WorldContextObject, int32& LivingPlayerCount, int32& TetherPlayerCount, int32& DeadPlayerCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetLeadPlayerIndex(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGingerbreadPlayerController* GetLeadPlayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLastManStandingValues(const UObject* WorldContextObject, int32& MaxLives, int32& CurrentLives, int32& NumPlayers, int32& LivePlayers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetGingerbreadPlayerIDs(const UObject* WorldContextObject, TArray<FGingerbreadPlayerId>& PlayerIDs, bool bIncludeNotJoinedPlayers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetExistingSackboyCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FGingerbreadPlayerId> GetCurrentPlayersSortByPlayerSlot(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetConnectedPlayerCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FlushLocalPlayerControls(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FindSackboys(const UObject* WorldContextObject, TArray<ASackboy*>& Sackboys, ESackboyQuery Query);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FilterMotionInput(const FVector& MotionVectorInput, FVector& FilterRef, const float FilterThreshold, const float DeadZone, bool DeadZoneSize, float Smoothing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_FGingerbreadPlayerId(const FGingerbreadPlayerId& A, const FGingerbreadPlayerId& B);
    
};

