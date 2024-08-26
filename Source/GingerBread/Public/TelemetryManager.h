#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPlayerJoinDirection.h"
#include "EventQueueEntry.h"
#include "GingerbreadPlayerId.h"
#include "LoadSaveData.h"
#include "TelemetryManager.generated.h"

class UGingerBreadGameInstance;
class UTelemetryTrackedValueManager;

UCLASS(Blueprintable)
class GINGERBREAD_API UTelemetryManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventQueueEntry> EventQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTelemetryTrackedValueManager* CVManager;
    
public:
    UTelemetryManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnUserProfileTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnInitTimer();
    
    UFUNCTION(BlueprintCallable)
    void GetZoneUnlockMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out);
    
    UFUNCTION(BlueprintCallable)
    void GetWorldUnlockMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out);
    
    UFUNCTION(BlueprintCallable)
    void GetVoidEnergyFound(const FLoadSaveData& lsd, int32& value_out);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockedZones(const FLoadSaveData& lsd, int32& value_out);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockedWorlds(const FLoadSaveData& lsd, int32& value_out);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockedLevels(const FLoadSaveData& lsd, int32& value_out);
    
    UFUNCTION(BlueprintCallable)
    void GetMemoryOrbsFound(const FLoadSaveData& lsd, int32& value_out);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelUnlockMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelsMasteredMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelsMastered(const FLoadSaveData& lsd, int32& value_out);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelsFinishedSinglePlayerMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelsFinishedMultiplayerMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelsCompletedSinglePlayer(const FLoadSaveData& lsd, int32& value_out);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelsCompletedMultiplayer(const FLoadSaveData& lsd, int32& value_out);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelsCompleted(const FLoadSaveData& lsd, int32& value_out);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelsAllPrizesMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out);
    
    UFUNCTION(BlueprintCallable)
    void GetLevelsAcedMap(const FLoadSaveData& lsd, const UGingerBreadGameInstance* gi, TMap<FName, bool>& values_out);
    
    UFUNCTION(BlueprintCallable)
    void GetCollectabellsCollected(const FLoadSaveData& lsd, int32& value_out);
    
};

