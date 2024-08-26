#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/GameInstance.h"
#include "CostumeHangerData.h"
#include "DisplaySettingsChangedDelegate.h"
#include "EControlMode.h"
#include "ECrossPlatformExportResult.h"
#include "EEndOfGameFlowState.h"
#include "EGamePlatform.h"
#include "EGingerbreadCultureType.h"
#include "EGingerbreadSKUType.h"
#include "ELevelLoadType.h"
#include "ELevelType.h"
#include "ERemappable_Buttons.h"
#include "ERenderQualityTypes.h"
#include "ESharedLifeMode.h"
#include "EVersionFlag.h"
#include "EpicErrorDelegateDelegate.h"
#include "GameStateCreatedDelegate.h"
#include "GameStateDestroyedDelegate.h"
#include "GameTextEnteredDelegate.h"
#include "GetHudComponentDeferredDelegateDelegate.h"
#include "GingerbreadCultureRow.h"
#include "GingerbreadPlayerId.h"
#include "GingerbreadSkuRow.h"
#include "ImageSetId.h"
#include "OnColourBlindProfileChangedDelegate.h"
#include "OnGameCultureLoadedDelegate.h"
#include "OnSavePerPlayerCreatedDelegate.h"
#include "OnSubtitleModeChangedDelegate.h"
#include "PIEGameStartingDelegate.h"
#include "PersistentLevelData2.h"
#include "SettingsGlobalData.h"
#include "Templates/SubclassOf.h"
#include "GingerBreadGameInstance.generated.h"

class ASackboy;
class ATutorialPromptActor;
class UAchievementManager;
class UAnimationMetadata;
class UAvatarManager;
class UCollectabellsMetadata;
class UCostumeManager;
class UDLCManager;
class UDLCMetadata;
class UDataTable;
class UDialogNotificationWidget;
class UESportsDataAsset;
class UGameplayLevelDataStore;
class UGingerbreadHUDComponent;
class UGingerbreadLoadingWidget;
class UGingerbreadNetworkActorSync;
class UGingerbreadPlayerManager;
class UGingerbreadSaveGameManager;
class UGingerbreadSessionManager;
class UGingerbreadWidget;
class UHierarchicalTagManager;
class UItemUnlockManager;
class ULoadSaveWrapper;
class UObject;
class UPS4PS5SaveGameTransfer;
class UPSNLinkManager;
class UPhysicsSceneManager;
class UPinManager;
class UPlayGoManager;
class UPlayerJoinManager;
class URemoteSettingsManager;
class USkinnedMeshInstanceManager;
class UTSSManager;
class UTelemetryManager;
class UTournamentManager;
class UTutorialTriggerManager;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class UGingerBreadGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrossPlatformExportDataReadDelegate, ECrossPlatformExportResult, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCrossPlatformExportDataExistDelegate, ECrossPlatformExportResult, Result, const FGingerbreadPlayerId&, player_id);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCrossPlatformExportDataDelegate, ECrossPlatformExportResult, Result, const FGingerbreadPlayerId&, player_id);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCrossPlatformCostumeDataReadyDelegate, const TArray<FCostumeHangerData>&, CostumeHangers, const FGingerbreadPlayerId&, player_id);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CultureSettingsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkuSettingsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGingerbreadCultureType CurrentTextCulture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGingerbreadCultureType CurrentAudioCulture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PendingTextCultureUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PendingAudioCultureUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CultureApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameCultureLoaded OnGameCultureLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Local_UseInfiniteLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* controllerAssociationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* axisAssociationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSaveLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DamageSystemAttackTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DamageSystemAttackNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DamageSystemResponseTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageSystemLightObjectThrownBySackboyTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageSystemHeavyObjectThrownBySackboyTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageSystemThrownByEnemyTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle EnemySelfDestructAttackTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle WaterTableAttackTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PickupContainerTableSackboyStandardAttackTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PickupContainerTableSackboyHeadstompAttackTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PickupContainerTableEnvironmentStandardAttackTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PickupContainerTableEnvironmentOutOfLevelAttackTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMusicEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSFXEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> AudioCultureMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVibrationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadingScreenToolTipId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> BasicLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LastManStandingLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PauseDemoLoadScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidget* DemoLoadingScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DemoToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorldMasterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GeraldTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ToysTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> VoidLevelHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UESportsDataAsset* ESportsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrbsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcedPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrizeBubblesPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumesPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType GameWorldID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType GameWorldStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType PlayedWorldID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayedLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCostumeManager* CostumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDLCMetadata* DLCMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimationMetadata* AnimationMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectabellsMetadata* CollectabellsMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPinManager* PinManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAchievementManager* AchievementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshInstanceManager* SkinnedMeshInstanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATutorialPromptActor> ToyDisengagementTutorialActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToyDisengagementConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATutorialPromptActor> SnowballDisengagementTutorialActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SnowballDisengagementConfig;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStateCreated OnGameStateCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStateDestroyed OnGameStateDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSavePerPlayerCreated OnSavePerPlayerCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnColourBlindProfileChanged OnColourBlindProfileChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubtitleModeChanged OnSubtitleModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPIEGameStarting OnPIEGameStarting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplaySettingsChanged OnDisplaySettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplaySettingsChanged OnDisplayMetricsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplaySettingsChanged OnRefreshPreset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplaySettingsChanged OnFullscreenToggle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplaySettingsChanged OnAudioDeviceListChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEpicErrorDelegate EpicErrorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTextEntered OnGameTextEntered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayPodCutscene;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadSessionManager* SessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadPlayerManager* PlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerJoinManager* PlayerJoinManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadNetworkActorSync* NetworkActorSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadSaveGameManager* SaveGameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadLoadingWidget* LoadingScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingsGlobalData GlobalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemUnlockManager* UnlockManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCManager* DLCManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTSSManager* TSSManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPS4PS5SaveGameTransfer* PS4PS5SaveGameTransfer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvatarManager* AvatarManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTelemetryManager* TelemetryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialTriggerManager* TutorialTriggerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URemoteSettingsManager* RemoteSettingsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayLevelDataStore* GameplayLevelDataStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType CurrentWorldMapPreviewArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayGoManager* PlayGoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHierarchicalTagManager* HierarchicalTagManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsSceneManager* PhysicsSceneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTournamentManager* TournamentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPSNLinkManager* PSNLinkManager;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrossPlatformExportDataDelegate OnCrossPlatformExportWriteComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrossPlatformExportDataReadDelegate OnCrossPlatformExportReadComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrossPlatformExportDataExistDelegate OnCrossPlatformExportExistComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrossPlatformCostumeDataReadyDelegate OnCrossPlatformCostumeDataReady;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnSteamDeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SteamDeckControllerIndex;
    
public:
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: HudComponentFromScreenDeferredDelegates
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty HudComponentFromScreenDeferredDelegates./Script/GingerBread.GingerBreadGameInstance:HudComponentFromScreenDeferredDelegates'

    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDialogNotificationWidget> DialogNotificationClassSoft;
    
    UGingerBreadGameInstance();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateDynamicNetTimeout();
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryShowGamepadTextInput(const FString& OriginalText, int32 MaxLength);
    
    UFUNCTION(BlueprintCallable)
    void SwitchOnLevelLoadType(ELevelLoadType& Out_LoadType);
    
    UFUNCTION(BlueprintCallable)
    void SwitchOnHostEndOfGameFlowState(EEndOfGameFlowState& Out_FlowState);
    
    UFUNCTION(BlueprintCallable)
    void SwitchOnEndOfGameFlowState(EEndOfGameFlowState& Out_FlowState, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SwapButtonRemaps(FGingerbreadPlayerId PlayerId, ERemappable_Buttons Key_1, ERemappable_Buttons Key_2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowNetworkUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSpawnAtLevelBadge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayPodCutscene() const;
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetVibrationScale(float Scale, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetUseRightStickToTilt(bool Enabled, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetUseControllerAudio(bool Enabled, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerMode(bool Enabled, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetTextCulture(EGingerbreadCultureType CultureToSet, bool SaveOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetTelemetryConsent(bool newSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleSpeakerStyle(int32 newSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleSize(int32 newSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleMode(int32 newSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleDyslexiaFont(bool newSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void SetStickSwap(bool Enabled, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingSpawnPointName(FName spawn_point_name);
    
    UFUNCTION(BlueprintCallable)
    void SetSeenFirstTimeScreen(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetRollToHold(bool Enabled, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderQuality(ERenderQualityTypes Type, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerupEverBeenEquipped(const FGingerbreadPlayerId& PlayerId, EControlMode ControlMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayLoadingTransition();
    
    UFUNCTION(BlueprintCallable)
    void SetOuterDeadzone(float Amount, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelIntroSequenceEnabled(bool Enabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetIsRenaming(bool renaming);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsMidLevelRetry(bool mid_level_retry);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertYAxis(bool Enabled, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertXAxis(bool Enabled, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerDeadzone(float Amount, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetHostUseBossPodPlatform(bool bUseBossPodPlatform);
    
    UFUNCTION(BlueprintCallable)
    void SetHostEndOfGameFlowState(EEndOfGameFlowState FlowState);
    
    UFUNCTION(BlueprintCallable)
    void SetHairQuality(bool on);
    
    UFUNCTION(BlueprintCallable)
    void SetGrabToToggle(bool Enabled, FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetGamma(float NewGamma);
    
    UFUNCTION(BlueprintCallable)
    void SetFlutterToggle(bool Enabled, FGingerbreadPlayerId PlayerId);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetExternalUIBlockingInput(bool bBlocking);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnvironmentalFuzz(bool on);
    
    UFUNCTION(BlueprintCallable)
    void SetEndOfGameFlowState(EEndOfGameFlowState FlowState, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetColourblindProfile(int32 newSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioCulture(EGingerbreadCultureType CultureToSet, bool SaveOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowCameraShake(bool newSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetActivePowerUp(EControlMode power_up);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveGloopMode(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void RevertGraphicSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetGameAssits(FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ResetDisplaySettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetControllerSettings(FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ResetControllerRemapsToDefault(FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ResetAudioSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllControlSettings(FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestZoneUnlockSave(const FGingerbreadPlayerId& player_id);
    
    UFUNCTION(BlueprintCallable)
    void RequestSavePlayerData(const FGingerbreadPlayerId& player_id);
    
    UFUNCTION(BlueprintCallable)
    void RequestSaveAllLocalPlayerData();
    
    UFUNCTION(BlueprintCallable)
    void RequestLoadImage(const FGingerbreadPlayerId& player_id, ImageSetId set_id, const FName& image_id, UObject* cb_object);
    
    UFUNCTION(BlueprintCallable)
    void RequestLevelCompletionSave(const FGingerbreadPlayerId& player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayLoadingTransition() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPreMapSwap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoined(const FGingerbreadPlayerId& PlayerId, ASackboy* Sackboy);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGamepadTextInputDismissed(const FString& NewText, bool Completed);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyHudComponentFromScreenDeferredCreated(const FName ScreenName, UGingerbreadHUDComponent* HUDComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void MonitorRealTimeMultiplay();
    
public:
    UFUNCTION(BlueprintCallable)
    void LinkEpicAccount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSteamOnlineSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnSteamDeck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelIntroSequenceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWorldMapPreviewArea() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEpicAccountLinked();
    
private:
    UFUNCTION(BlueprintCallable)
    void IncrementPlayedTimes();
    
public:
    UFUNCTION(BlueprintCallable)
    void HideSlateLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVersionFlag(EVersionFlag Flag) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasPowerupEverBeenEquipped(const FGingerbreadPlayerId& PlayerId, EControlMode ControlMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasJustPlayedALevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInternetConnection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCultureBeenApplied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetZoneTable(const ELevelType WorldID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVibrationScale(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseRightStickToTilt(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseControllerAudio(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTriggerMode(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGingerbreadCultureType GetTextCulture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTelemetryConsent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubtitleSpeakerStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubtitleSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubtitleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubtitleDyslexiaFont() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSubtitleAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStickSwap(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSteamDeckControllerIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStartingSpawnPointName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldSwapEnterAndBackInputs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESharedLifeMode GetSharedLifeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSFXVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSeenFirstTimeScreen(const FGingerbreadPlayerId& PlayerId) const;
    
    UFUNCTION(BlueprintCallable)
    FName GetRowIDFromRemappableKey(FGingerbreadPlayerId PlayerId, ERemappable_Buttons Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRollToHold(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable)
    void GetRenderQualityRange(ERenderQualityTypes Type, float& Min, float& Max, float& increment);
    
    UFUNCTION(BlueprintCallable)
    float GetRenderQuality(ERenderQualityTypes Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGingerbreadPlayerId GetPrimaryLocalPlayerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULoadSaveWrapper* GetPlayerLoadSaveData(const FGingerbreadPlayerId& player_id) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayedLevelIDs(ELevelType& WorldID, int32& LevelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOuterDeadzone(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetLevelTable(const ELevelType WorldID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELevelLoadType GetLevelLoadType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMidLevelRetry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLevelRetry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertYAxis(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertXAxis(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInnerDeadzone(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable)
    void GetHudComponentFromScreenDeferred(const FName ScreenName, const TSubclassOf<UGingerbreadHUDComponent> HudComponentClass, const FGetHudComponentDeferredDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHostUseBossPodPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEndOfGameFlowState GetHostEndOfGameFlowState() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHairQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGrabToToggle(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayLevelDataStore* GetGameplayLevelDataStore() const;
    
    UFUNCTION(BlueprintCallable)
    EGamePlatform GetGamePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPersistentLevelData2 GetGameLevelSaveData(const FGingerbreadPlayerId& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlutterToggle(FGingerbreadPlayerId PlayerId) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEnvironmentalFuzz();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEndOfGameFlowState GetEndOfGameFlowState(const FGingerbreadPlayerId& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDialogueVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetCurrentZoneTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELevelType GetCurrentWorldMapPreviewArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGingerbreadSKUType GetCurrentSkuType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGingerbreadSkuRow GetCurrentSkuDataRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetCurrentLevelTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    EGingerbreadCultureType GetCultureTypeForCode(const FString& CultureCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FGingerbreadCultureRow GetCultureDataRow(EGingerbreadCultureType CultureType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FString GetCultureCodeForType(EGingerbreadCultureType CultureType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColourblindProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGingerbreadCultureType GetAudioCulture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowCameraShake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGingerbreadPlayerId> GetAllLocalPlayerIds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControlMode GetActivePowerUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveGloopMode() const;
    
    UFUNCTION(BlueprintCallable)
    void EndLoadingScreen(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCurrentCultureSupportDyslexic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCultureSupportDyslexic(EGingerbreadCultureType CultureType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CrossPlatformTransfer_RestartApplication() const;
    
    UFUNCTION(BlueprintCallable)
    void CrossPlatformTransfer_RequestUpload(const FGingerbreadPlayerId& player_id);
    
    UFUNCTION(BlueprintCallable)
    void CrossPlatformTransfer_RequestExist(const FGingerbreadPlayerId& player_id);
    
    UFUNCTION(BlueprintCallable)
    void CrossPlatformTransfer_RequestDownload(const FGingerbreadPlayerId& player_id);
    
    UFUNCTION(BlueprintCallable)
    void CrossPlatformTransfer_OnUploadFinished(ECrossPlatformExportResult Result, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void CrossPlatformTransfer_OnSaveFinished(ECrossPlatformExportResult Result);
    
    UFUNCTION(BlueprintCallable)
    void CrossPlatformTransfer_OnExistFinished(ECrossPlatformExportResult Result, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void CrossPlatformTransfer_OnDownloadFinished(ECrossPlatformExportResult Result, const FString& jsonString, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CrossPlatformTransfer_GetExportData(const FGingerbreadPlayerId& player_id, FString& resultJson) const;
    
    UFUNCTION(BlueprintCallable)
    void CrossPlatformTransfer_CheckApplyComplete();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmGraphicSettings();
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayLoadingTransition();
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingScreen(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyControllerRemapsForPlayer(FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ApplyControllerRemaps();
    
    UFUNCTION(BlueprintCallable)
    bool AnyGraphicChanges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowSaveDataTransfer() const;
    
};

