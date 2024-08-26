#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameState.h"
#include "CutsceneRegisteredEventDelegate.h"
#include "CutsceneUnregisteredEventDelegate.h"
#include "EAllPlayersDiedBehaviour.h"
#include "EControlMode.h"
#include "EGingerbreadMatchStatus.h"
#include "EHealthPickupType.h"
#include "EPickupCollectionResult.h"
#include "EPlayerJoinDirection.h"
#include "GingerbreadPlayerId.h"
#include "HostReplicatedPersistentPlayerData2.h"
#include "InfiniteLivesChangedDelegate.h"
#include "NFLastManStandingChangedDelegate.h"
#include "NetworkEventComponent.h"
#include "OnMatchStatusChangedDelegate.h"
#include "PlayerChangeDelegateDelegate.h"
#include "ReplicatedHostSaveDataReadyDelegate.h"
#include "SackboyControlModeDetails.h"
#include "SackboyLifeEventDelegate.h"
#include "SackboyStateChangedDelegate.h"
#include "SessionPrivacySettingsChangedDelegate.h"
#include "SharedLivesDepletedDelegate.h"
#include "TeamWipeTimeDilationEventDelegate.h"
#include "TeamWipeZoomEventDelegate.h"
#include "TransientPlayerData.h"
#include "GingerbreadGameState.generated.h"

class AAICoordinatorManager;
class ABabyMonkeySpawnerManager;
class ABonusRoomManager;
class ABoomblebeeManager;
class ACameraEffectManager;
class ACheckpointManager;
class ACoolSystem;
class ACrumplerManager;
class ACutsceneManager;
class AFlameJet2Manager;
class AGameplayAudioManager;
class AGingerbreadCameraManager;
class AGingerbreadEventDispatcher;
class AGingerbreadHUD;
class AGingerbreadLevelSequenceActor;
class AGingerbreadLevelSettings;
class AGingerbreadNetworkManager;
class AGingerbreadSubtitleManager;
class AGingerbreadTriggerManager;
class AHitPointsManager;
class ALevelManager;
class ALevelResetManager;
class ALevelStreamManager;
class ALoadingSyncManager;
class AMusicManager;
class AMusicStateManager;
class AObjectTickManager;
class APhysicsAudioSystem;
class APickupContainerManager;
class APufferFishTickManager;
class ARegistrar;
class ARemixDroneManager;
class ARemixGauntlet;
class ARemixSpotlightManager;
class ARhythmManager;
class ASackboy;
class ASackboyAppearanceManager;
class ASackboyRespawnManager;
class AScoreBubbleManager;
class AShatteredOrbManager;
class ATimedChallenge;
class ATutorialTriggerInjector;
class AVertexAnimatedMeshManager;
class AWaterTableManager;
class UDarkMatterEngine;
class UDataTable;
class UDebugOptionsCreator;
class UGingerbreadDebugManager;
class UGingerbreadPlayerManager;
class UNetworkEventComponent;
class USumoPhysicalMaterial;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadCameraManager* GingerbreadCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACheckpointManager* CheckpointManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadTriggerManager* TriggerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARegistrar* Registrar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACoolSystem* CoolSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboyAppearanceManager* SackboyAppearanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboyRespawnManager* SackboyRespawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadNetworkManager* NetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadPlayerManager* PlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICoordinatorManager* CoordinatorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDarkMatterEngine* DarkMatterEngine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadDebugManager* DebugManagerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugOptionsCreator* DebugOptionsCreator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelStreamManager* LevelStreamingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjectTickManager* ObjectTickManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadEventDispatcher* GingerbreadEventDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelManager* LevelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadLevelSettings* LevelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMusicManager* MusicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APickupContainerManager* PickupContainerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARhythmManager* RhythmManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaterTableManager* WaterTableManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABabyMonkeySpawnerManager* BabyMonkeySpawnerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACutsceneManager* CutsceneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALoadingSyncManager* LoadingSyncManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayAudioManager* GameplayAudioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhysicsAudioSystem* PhysicsAudioSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelResetManager* LevelResetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHitPointsManager* HitPointsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATimedChallenge* TimedChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARemixSpotlightManager* RemixSpotlightManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARemixDroneManager* RemixDroneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARemixGauntlet* RemixGauntlet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadSubtitleManager* GingerbreadSubtitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVertexAnimatedMeshManager* VertexAnimatedMeshManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraEffectManager* CameraEffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShatteredOrbManager* ShatteredOrbManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATutorialTriggerInjector* TutorialTriggerInjector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFlameJet2Manager* FlameJet2Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScoreBubbleManager* ScoreBubbleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABonusRoomManager* BonusRoomManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACrumplerManager* CrumplerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABoomblebeeManager* BoomblebeeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APufferFishTickManager* PufferFishTickManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMusicStateManager* MusicStateManager;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_NonReplicatedManagersChanged, meta=(AllowPrivateAccess=true))
    uint64 NonReplicatedManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USumoPhysicalMaterial> DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InfiniteLivesChanged, meta=(AllowPrivateAccess=true))
    bool bInfinitePlayerLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GamestateReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DirectLoadTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IntroCutscenePlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGingerbreadLevelSequenceActor*> ActiveSequencers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DebugNetworkQualitySelectedByUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString MatchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MatchStatusChanged, meta=(AllowPrivateAccess=true))
    EGingerbreadMatchStatus MatchStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchStatusChanged OnMatchStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid TelemetryGameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SessionPrivacySettingsChanged, meta=(AllowPrivateAccess=true))
    bool SessionFriendsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SessionPrivacySettingsChanged, meta=(AllowPrivateAccess=true))
    bool SessionCrossPlatform;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionPrivacySettingsChanged OnSessionPrivacySettingsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ValidSessionPlayersChanged, meta=(AllowPrivateAccess=true))
    TArray<FGingerbreadPlayerId> ValidSessionPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool MidLevelRetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ActiveCameraSnaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool PlayerInCannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector CannonPos;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNFLastManStandingChanged OnNFLastManStandingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedLivesDepleted OnSharedLivesDepleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyLifeEvent OnTeamDeathSackboyDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInfiniteLivesChanged OnInfiniteLivesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamWipeZoomEvent OnTeamWipeZoomBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamWipeZoomEvent OnTeamWipeZoomEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamWipeTimeDilationEvent OnTeamWipeTimeDilationBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamWipeTimeDilationEvent OnTeamWipeTimeDilationEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetworkEventComponent::FOnNetworkEventDelegate OnNetworkEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneRegisteredEvent OnCutsceneRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneUnregisteredEvent OnCutsceneUnregistered;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerChangeDelegate OnPlayerCountChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyStateChanged OnPlayerJoinedGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCheckpointSFXEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLivesSystemEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartInLastManStanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAllPlayersDiedBehaviour AllPlayersDiedBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDisableOffScreenCheck;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GlobalControlModeState, meta=(AllowPrivateAccess=true))
    FSackboyControlModeDetails GlobalControlModeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool GlobalGloopOnFeet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGingerbreadPlayerId, FTransientPlayerData> TransientPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool LastManStandingActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 LastManStandingLivesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NFLastManStandingUI, meta=(AllowPrivateAccess=true))
    int32 NFNumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NFLastManStandingUI, meta=(AllowPrivateAccess=true))
    int32 NFLivePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NFLastManStandingUI, meta=(AllowPrivateAccess=true))
    int32 NFMaxLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NFLastManStandingUI, meta=(AllowPrivateAccess=true))
    int32 NFCurrentLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGingerbreadHUD* mpHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HostSharedPersistentPlayerData, meta=(AllowPrivateAccess=true))
    FHostReplicatedPersistentPlayerData2 HostSharedPersistentPlayerData;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedHostSaveDataReady OnReplicatedHostSaveDataReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingNetworkHostSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNetworkEventComponent* NetworkEventComponent;
    
public:
    AGingerbreadGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TriggerNetworkEvent(const FName& EventName, bool needSync);
    
    UFUNCTION(BlueprintCallable)
    void SetInstantSpawningEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetInfiniteLives(bool InfiniteLives);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalControlMode(ASackboy* modeChangeInstigator, EControlMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void ResetLives(bool ReplenishFromPickup);
    
    UFUNCTION(BlueprintCallable)
    bool RequestReduceLives();
    
    UFUNCTION(BlueprintCallable)
    void RefreshLives();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSaveCreated(const FGingerbreadPlayerId& InPlayerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ValidSessionPlayersChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SessionPrivacySettingsChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NonReplicatedManagersChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NFLastManStandingUI();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchStatusChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_InfiniteLivesChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HostSharedPersistentPlayerData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GlobalControlModeState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNetworkEventInternal(FName EventName);
    
public:
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPickupCollectionResult> OnLifePickupCollected(ASackboy* theSackboy, TEnumAsByte<EHealthPickupType> lifePickup);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnJoinedPlayerCountChanged(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnInitialPlayerCountAvailable(const FString& Level, int32 Count);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHeartCollected(ASackboy* collector);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_UpdateLevelCompletionTrophies();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnPreMapLoad(const FString& NextMap);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AwardTrophyLearnedSquire();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AwardTrophyDayDream();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AwardTrophyCutItOut();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AllSackboysDancing();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastShowCutSceneUI(bool show_blackbars, bool show_skip_cutscene_prompt, bool show_skip_speech_prompt, bool show_title_screen, bool show_vote_skips, bool show_next_and_skip_prompt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLivesSystemEnabled(bool bAlsoCheckLevelSettings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastManStandingActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstantSpawnEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInfiniteLives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHostSaveDataReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndSequenceActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool InCutSceneMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingLives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSharedLifeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControlMode GetGlobalControlMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAllPlayersDiedBehaviour GetAllPlayersDiedBehaviour() const;
    
};

