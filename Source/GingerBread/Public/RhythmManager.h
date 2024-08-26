#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkMarkerTriggerCount.h"
#include "ERhythmManagerPostedMusicState.h"
#include "MusicEventType.h"
#include "MusicStateTableRow.h"
#include "OnRhythmManagerInSyncWithServerDelegate.h"
#include "OnRhythmManagerMusicStartedDelegate.h"
#include "OnRhythmManagerMusicStateChangedDelegate.h"
#include "OnRhythmManagerNewBeatDelegate.h"
#include "RhythmManager.generated.h"

class AMusicManager;
class ARhythmManager;
class UAkAudioEvent;
class UAkComponent;
class UDataTable;
class UNetworkEventComponent;
class UObject;
class URhythmicMaterialCoordinatorComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ARhythmManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNetworkEventComponent* NetworkEventComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URhythmicMaterialCoordinatorComponent* RhythmicMaterialCoordinatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FillDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MusicTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MusicStateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicStateTableRow InitialMusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialTempo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartMusicImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartMusicDelay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MusicStartTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatBucketCount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRhythmManagerMusicStarted OnMusicStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRhythmManagerNewBeat OnNewBeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRhythmManagerMusicStateChanged OnMusicStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRhythmManagerInSyncWithServer OnInSyncWithServer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerAkMarkerTriggerCounts, meta=(AllowPrivateAccess=true))
    TArray<FAkMarkerTriggerCount> ServerAkMarkerTriggerCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName ServerRequestedMusicState;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_HasServerPostedMusicEvent, meta=(AllowPrivateAccess=true))
    ERhythmManagerPostedMusicState HasServerPostedMusicEvent;
    
public:
    ARhythmManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromBeat(UObject* Subscriber, const float Beat, const int32 LoopPeriod);
    
    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromAllBeats(UObject* Subscriber);
    
    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromAkMarker(UObject* pSubscriber, const FName MarkerLabel);
    
    UFUNCTION(BlueprintCallable)
    void SubscribeToBeat(UObject* Subscriber, const float Beat, const int32 LoopPeriod);
    
    UFUNCTION(BlueprintCallable)
    void SubscribeToAkMarker(UObject* Subscriber, const FName MarkerLabel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartMusicManually();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RequestMusicState(const FMusicStateTableRow& MusicState);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAudioEventOnBeat(UAkComponent* InAkComponent, UAkAudioEvent* InAudioEvent, float Beat, int32 LoopPeriod);
    
private:
    UFUNCTION(BlueprintCallable)
    void PostMusicEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerAkMarkerTriggerCounts();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasServerPostedMusicEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkEvent(const FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void OnLateJoinerSyncReceivedEvent(AMusicManager* pMusicManager, FName PendingSectionName);
    
    UFUNCTION(BlueprintCallable)
    void OnGingerbreadNetworkManagerAvailable(AActor* pManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnAkMusicEvent(TEnumAsByte<MusicEventType> MusicEvent, float BarDuration, float BeatDuration, FName CueName, int32 CurrentBar, int32 CurrentBeat, int32 BeatsPerBar, int32 SectionBeatCount, int32 TotalBeatCount);
    
    UFUNCTION(BlueprintCallable)
    void OnAkMarkerEvent(TEnumAsByte<MusicEventType> MusicEvent, FName MarkerLabel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARhythmManager* GetRhythmManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMusicStateGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInSyncWithServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSectionStartBeatCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSectionFractionalBeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMusicStateTableRow GetCurrentMusicState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFractionalBeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBeatWithinLoopPeriod(const int32 LoopPeriod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBeatDuration() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DEBUG_SeekMusic();
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_JumpToSection();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateTimeUntilNextFractionOfBeat(const float Fraction, const float MinimumDeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateBeatWithinLoopPeriod(const float Beat, const int32 LoopPeriod);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastMusicStartedEvent();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_PostMusicEventWithCSP();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_OnAllPlayersArrived();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AddAudioEventOnBeat(UAkComponent* InAkComponent, UAkAudioEvent* InAudioEvent, float Beat, int32 LoopPeriod);
    
};

