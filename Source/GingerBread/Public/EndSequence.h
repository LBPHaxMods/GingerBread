#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "EEndGameLogicType.h"
#include "EEndOfGameFlowState.h"
#include "EEndScoreboardType.h"
#include "EEndSequenceCameraState.h"
#include "ELoadingType.h"
#include "ESackboyEmotionalState.h"
#include "EndSequencePlayerResult.h"
#include "GingerbreadPlayerId.h"
#include "OnCreditsSequenceEventDelegate.h"
#include "OnCreditsSequenceVoteForSkipDelegate.h"
#include "OnEndSequenceFinishedDelegate.h"
#include "RewardContents.h"
#include "Templates/SubclassOf.h"
#include "EndSequence.generated.h"

class ACameraArea;
class ACollectabellReward;
class AGingerbreadLevelSequenceActor;
class AGingerbreadPlayerController;
class AMemoryOrb;
class APrizeBubble;
class ASackboy;
class UDataTable;
class UGingerbreadWidgetComponent;
class USceneComponent;
class UTexture;

UCLASS(Blueprintable)
class AEndSequence : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelRewardsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APrizeBubble> PrizeBubbleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMemoryOrb> MemoryOrbClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACollectabellReward> CollectabellAmountClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreCountUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraFocusPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowCameraLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndScoreboardType ScoreboardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadLevelSequenceActor* PostResultSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadLevelSequenceActor* PS5_PostResultSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseEndGameFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndGameLogicType EndGameLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndOfGameFlowState EntryState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadingType LevelLoadingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESackboyEmotionalState WinnerEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinnerEmotionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SequenceSpeed, meta=(AllowPrivateAccess=true))
    float SequenceSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EndSequenceRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidgetComponent* ScreenWidgetComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WinnerScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan m_TotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndSequencePlayerResult> m_PlayerResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumPlayersInScoreboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPhotoOp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* m_WinnerPhoto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACameraArea> FixedCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACameraArea> FollowCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CameraState, meta=(AllowPrivateAccess=true))
    EEndSequenceCameraState AUTH_CameraState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndSequenceFinished OnEndSequenceFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreditsSequenceEvent OnCreditsStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreditsSequenceEvent OnCreditsFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreditsSequenceVoteForSkip OnCreditsVoteForSkip;
    
public:
    AEndSequence(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateVotes(const int32 NumVotes, const int32 VotesMax);
    
    UFUNCTION(BlueprintCallable)
    void ShowTrophyOnWinnersHand();
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceSpeedMultiplier(float NewMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRewardPrizeUI(FRewardContents prize1, FRewardContents prize2, FRewardContents prize3, int32& TierAchieved);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEndSequenceStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCameraState(EEndSequenceCameraState camera_state);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TriggerEndSequence();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void ScoreboardSequenceDelay(float Delay, bool Retrigger, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void RewardPrizeTier(int32 PrizeTier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReturnToTitleScreen();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void ReplicateLevelResults(int32 NumPlayers, int32 WinnerScore, int32 TotalScore, FTimespan totalTime, FGingerbreadPlayerId WinnerSackboyId, bool IsPhotoOp, const TArray<FEndSequencePlayerResult>& PlayerResults);
    
public:
    UFUNCTION(BlueprintCallable)
    void RecordMemoryOrbCollection(int32 OrbID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PutWinnerIntoActingMode();
    
public:
    UFUNCTION(BlueprintCallable)
    void PostPhotoSequence();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySequenceActor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSequenceSpeedChanged(const float& NewSpeed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SequenceSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CameraState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPostResultsSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnCreditsTriggerEndSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnCreditsStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCreditsSkipVoted(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnCreditsFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_TriggerEndSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitSequence();
    
    UFUNCTION(BlueprintCallable)
    void InitCountUpSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPhotoOp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasBeatenPreviousRecord();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWinnerScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetWinnerSackboy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWinnerPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWinnerDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTimespan GetTotalTimeToCache();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASackboy* GetTimedScoreboardWinner();
    
    UFUNCTION(BlueprintCallable)
    void GetTierBoundries(FRewardContents& BronzeTier, FRewardContents& SilverTier, FRewardContents& GoldTier, bool RecalculateTiers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerScoresCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEndSequencePlayerResult> GetPlayerResults() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPhotoFocusPoint() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEndSequenceStarted() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBoardFocusPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActivePlayersNumber() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteEndLevelFlow();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndCredits();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRewardPrize(ASackboy* Sackboy, int32 PrizeTier) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CalculateTierBoundries();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EEndScoreboardType CalculateScoreboardType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGingerbreadPlayerId, float> CachePlayerTimesAccrued();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGingerbreadPlayerId, int32> CacheGauntletScores();
    
};

