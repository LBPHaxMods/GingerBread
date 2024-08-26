#pragma once
#include "CoreMinimal.h"
#include "ELevelResetBehaviour.h"
#include "EPlayerJoinDirection.h"
#include "ESackboySpawnType.h"
#include "GingerbreadManager.h"
#include "GingerbreadPlayerId.h"
#include "LevelResetEventDelegate.h"
#include "LevelResetPlayerEventDelegate.h"
#include "LevelResetSubLevelEventDelegate.h"
#include "LevelResetManager.generated.h"

class ASackboy;
class UGingerbreadStreamingLevel;
class USpawnPointComponent;

UCLASS(Blueprintable)
class ALevelResetManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelResetEvent OnResetStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelResetEvent OnResetFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelResetSubLevelEvent OnSubLevelResetStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelResetSubLevelEvent OnSubLevelResetFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelResetPlayerEvent OnPlayerRespawnStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelResetPlayerEvent OnPlayerRespawnFinish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bResetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsServerWaitingUnloadNotification, meta=(AllowPrivateAccess=true))
    bool m_IsServerWaitingUnloadNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsServerWaitingReloadNotification, meta=(AllowPrivateAccess=true))
    bool m_IsServerWaitingReloadNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadStreamingLevel*> m_LevelsToReset;
    
public:
    ALevelResetManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void WaitForUnloadingSubLevels();
    
    UFUNCTION(BlueprintCallable)
    void WaitForReloadingSubLevels();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetResetEnabled(bool bResetEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void Server_OnSubLevelUnloaded(UGingerbreadStreamingLevel* StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void Server_OnSubLevelActivated(UGingerbreadStreamingLevel* StreamingLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveResetBlocker(FName ResetBlockerID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSackboySpawned(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> spawn_type, USpawnPointComponent* spawn_point);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsServerWaitingUnloadNotification();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsServerWaitingReloadNotification();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StartResetting(bool AllPlayersDead);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_FinishResetting(bool AllPlayersDead);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResetEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResetCount() const;
    
    UFUNCTION(BlueprintCallable)
    void FullReset();
    
    UFUNCTION(BlueprintCallable)
    void CustomReset(TEnumAsByte<ELevelResetBehaviour::Type> ResetBehaviour);
    
private:
    UFUNCTION(BlueprintCallable)
    void Client_OnSubLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void Client_OnSubLevelLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddResetBlocker(FName ResetBlockerID);
    
};

