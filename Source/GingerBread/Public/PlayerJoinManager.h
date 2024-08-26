#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/LatentActionManager.h"
#include "EPlayerJoinDirection.h"
#include "GingerbreadPlayerId.h"
#include "OnControllerConnectionChangedEventDelegate.h"
#include "OnCountChangedDelegate.h"
#include "OnSackboyJoinChangedDelegate.h"
#include "PlayerJoinManager.generated.h"

class AActor;
class AGingerbreadGameState;
class ULevel;
class ULoadSaveWrapper;
class UPlayerJoinFailUIInterface;
class UWorld;

UCLASS(Blueprintable)
class GINGERBREAD_API UPlayerJoinManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountChanged OnJoinedPlayerCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerConnectionChangedEvent OnControllerConnectionChangeEvents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSackboyJoinChanged OnSackboyJoinedLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSackboyJoinChanged OnSackboyLeavingLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountChanged OnSackboyCountChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGingerbreadPlayerId, ULoadSaveWrapper*> SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerJoinFailUIInterface* LoadSaveFailInterface;
    
public:
    UPlayerJoinManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelResetStart(ULevel* sub_level, FName package_name);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelResetFinish(ULevel* sub_level, FName package_name);
    
    UFUNCTION(BlueprintCallable)
    void OnPreLoadMap(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void OnPreClientTravel(const FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel);
    
    UFUNCTION(BlueprintCallable)
    void OnPostLoadMap(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnPIEGameStarting();
    
    UFUNCTION(BlueprintCallable)
    void OnPIEGameStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelStreamStart(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelStreamManagerCreated(AActor* lsm_actor);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelStreamFinish(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelResetManagerCreated(AActor* lrm_actor);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateCreated(AGingerbreadGameState* State);
    
public:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetSublevelInitialPlayerCount(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& SublevelName, int32& InitialPlayerCount);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetPlayerJoinLeaveEvents(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FGingerbreadPlayerId& Player, EPlayerJoinDirection& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSackboyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPlayersJoinedGameCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGingerbreadPlayerId> GetCurrentPlayersJoinedGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLocalPlayersCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGingerbreadPlayerId> GetCurrentLocalPlayers() const;
    
};

