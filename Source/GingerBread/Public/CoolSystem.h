#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "AwardScoreEventDelegate.h"
#include "CreativeBurstEventEventDelegate.h"
#include "EPlayerJoinDirection.h"
#include "ESackboySpawnType.h"
#include "EScoreSource.h"
#include "ETrophy.h"
#include "GingerbreadManager.h"
#include "GingerbreadPlayerId.h"
#include "LevelTrophyRow.h"
#include "MusicEventType.h"
#include "OnTrophyChangedEventDelegate.h"
#include "OnTrophySystemEnabledDelegate.h"
#include "ScoreEventDelegate.h"
#include "ScoreMultiplierTierChangedEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "TrophySystemMultiplierEventDelegate.h"
#include "CoolSystem.generated.h"

class AActor;
class ACoolSystem;
class ASackboy;
class AScoreBubbleFX;
class UAkAudioEvent;
class UAkComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class USpawnPointComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ACoolSystem : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAwardScoreEvent OnAwardScore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScoreEvent OnResetScore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScoreMultiplierTierChangedEvent OnIncreaseScoreMultiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScoreMultiplierTierChangedEvent OnDecreaseScoreMultiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScoreEvent OnResetScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AKMultiplierTimer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrophySystemMultiplierEvent OnMultiplierActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrophySystemMultiplierEvent OnMultiplierEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrophySystemMultiplierEvent OnMultiplierReactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrophyChangedEvent OnRankUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrophyChangedEvent OnRankDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrophySystemEnabled OnTrophySystemEnabledBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeBurstEventEvent OnCreativeBurstBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeBurstEventEvent OnCreativeBurstEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ScoreBubbleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ScoreBubbleMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FlickeringScoreBubbleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FlickeringScoreBubbleMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ScoreBubbleStackMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ScoreBubbleStackMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AScoreBubbleFX> ScoreBubleFxBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ScoreBubbleColours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TrophySystemColours;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ScoreAwardedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ScoreResetPitchAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreResetPitchDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrophyPoints, meta=(AllowPrivateAccess=true))
    int32 TrophyPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGingerbreadPlayerId, int32> PerPlayerTrophyScoreStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeStartToExpire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MultiplierActivatedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MultiplierTickEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartToExpireEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartToExpireStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExpiredEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpawnScoreBubbleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplierTickDelay;
    
public:
    ACoolSystem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateBubbleColour();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void TeamWipeDeactivateScoreMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnScoreBubblesForPlayer(ASackboy* Sackboy, const FVector& Location, int32 Count, const FVector LaunchVelocity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnScoreBubbles(const UObject* WorldContextObject, ASackboy* Sackboy, const FVector& Location, int32 Count, const FVector LaunchVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetScoreBubbleColour(const FVector& ColourVector);
    
    UFUNCTION(BlueprintCallable)
    void RestoreSnapshot(const FName& snapshot_label);
    
    UFUNCTION(BlueprintCallable)
    void ResetScoreMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void ResetScore();
    
    UFUNCTION(BlueprintCallable)
    void ResetMultiplierTierTimer();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSnapshot(const FName& snapshot_label);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void PostPointsCollection(ASackboy* Sackboy, EScoreSource Source, FVector_NetQuantize100 Location, int32 Points);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboySpawned(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> spawn_type, USpawnPointComponent* spawn_point);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyDied(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrophyPoints();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnMusicEvent(TEnumAsByte<MusicEventType> MusicEvent, float BarDuration, float BeatDuration);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEventDispatcherAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckpointManagerAvailable(AActor* ManagerActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAllPlayersDied(USpawnPointComponent* spawn_point);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlaySpawnScoreBubblesEvent(FVector Location);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSystemEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScoreMultiplierActive() const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementScoreMultiplierTier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrophyPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTrophyMeterFill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLevelTrophyRow GetTrophyInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSilverTrophyWinThreshold() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetScoreThresholdsForMap(const FString& MapName, int32& OutBronze, int32& OutSilver, int32& OutGold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScoreMultiplierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScoreMultiplierTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreMultiplierTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScoreMultiplierDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScoreMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScoreBubbleColourVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetOrCreateScoreBubbleStackMaterial();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetOrCreateMaterial(bool getFlickering);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ACoolSystem* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndividualMultiplierCollectedScore(ASackboy* Sackboy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndividualCollectedScore(ASackboy* Sackboy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGoldTrophyWinThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ETrophy::Type> GetCurrentTrophy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCreativeBurstPercentageComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBronzeTrophyWinThreshold() const;
    
    UFUNCTION(BlueprintCallable)
    void EndCreativeBurst();
    
    UFUNCTION(BlueprintCallable)
    void DecrementScoreMultiplierTier();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void DeactivateScoreMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void CreateSnapshot(const FName& snapshot_label);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void BroadcastScoreReset();
    
    UFUNCTION(BlueprintCallable)
    void BeginCreativeBurst(ASackboy* triggering_sackboy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AwardScoreBubble(const UObject* WorldContextObject, ASackboy* Sackboy, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AwardScore(const UObject* WorldContextObject, ASackboy* Sackboy, EScoreSource Source, const FVector& Location, int32 Points);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void ActivateScoreMultiplier();
    
};

