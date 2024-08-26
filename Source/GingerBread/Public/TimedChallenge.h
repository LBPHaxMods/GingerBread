#pragma once
#include "CoreMinimal.h"
#include "ETimedChallengeState.h"
#include "GingerbreadManager.h"
#include "Templates/SubclassOf.h"
#include "TimedChallengeAdjustmentEventDelegate.h"
#include "TimedChallengeEventDelegate.h"
#include "TimedChallengeFinishEventDelegate.h"
#include "TimedChallengeRewardData.h"
#include "TimedChallengeSpeedEventDelegate.h"
#include "TimedChallengeSyncData.h"
#include "TimedChallenge.generated.h"

class AActor;
class UDataAsset;
class UTimedChallengeDataAsset;

UCLASS(Blueprintable)
class ATimedChallenge : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedChallengeEvent OnStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedChallengeFinishEvent OnFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedChallengeEvent OnFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedChallengeEvent OnReset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ETimedChallengeState m_State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoStartAfterLevelReset;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedChallengeEvent OnTimerPaused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedChallengeEvent OnTimerResumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedChallengeAdjustmentEvent OnTimerAdjusted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedChallengeSpeedEvent OnTimerSpeedChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_TotalTimeAdjustments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_TimerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SyncData, meta=(AllowPrivateAccess=true))
    FTimedChallengeSyncData m_SyncData;
    
public:
    ATimedChallenge(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetTimerSpeed(float TimerSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetRewardData(const FTimedChallengeRewardData& RewardData);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTimer();
    
    UFUNCTION(BlueprintCallable)
    void RESET();
    
    UFUNCTION(BlueprintCallable)
    void PauseTimer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SyncData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelResetStart(int32 ResetCount, bool AllPlayersDead);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelResetFinish(int32 ResetCount, bool AllPlayersDead);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlueprintManagerPropertiesLoaded(const UDataAsset* DataAsset);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Start();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTimerSpeed(float TimerSpeed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResumeTimer();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Reset();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PauseTimer();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Finish(bool bIsPendingReset);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Fail();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AdjustTimer(AActor* Adjuster, float ActualTimeAdjustment, float RequestedTimeAdjustment);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimerSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETimedChallengeState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimedChallengeRewardData GetRewardData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTime(bool bIgnoreAdjustments) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UTimedChallengeDataAsset> GetDataAssetBlueprintClass() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    void Fail();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetTimerSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeReset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAdjustTimer() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackupBlueprintManagerProperties(UDataAsset* DataAsset);
    
public:
    UFUNCTION(BlueprintCallable)
    void AdjustTimer(AActor* Adjuster, float TimeAdjustment);
    
};

