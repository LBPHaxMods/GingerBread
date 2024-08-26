#include "GingerBreadGameInstance.h"
#include "AnimationMetadata.h"
#include "CollectabellsMetadata.h"
#include "CostumeManager.h"
#include "DLCMetadata.h"
#include "PinManager.h"
#include "SkinnedMeshInstanceManager.h"
#include "Templates/SubclassOf.h"

UGingerBreadGameInstance::UGingerBreadGameInstance() {
    this->CultureSettingsTable = NULL;
    this->SkuSettingsTable = NULL;
    this->CurrentTextCulture = EGingerbreadCultureType::INVALID;
    this->CurrentAudioCulture = EGingerbreadCultureType::INVALID;
    this->PendingTextCultureUpdate = false;
    this->PendingAudioCultureUpdate = false;
    this->CultureApplied = false;
    this->Local_UseInfiniteLives = false;
    this->controllerAssociationTable = NULL;
    this->axisAssociationTable = NULL;
    this->isSaveLoaded = false;
    this->DamageSystemAttackTable = NULL;
    this->DamageSystemResponseTable = NULL;
    this->bIsMusicEnabled = true;
    this->bIsSFXEnabled = true;
    this->bVibrationEnabled = true;
    this->LoadingScreenToolTipId = 0;
    this->BasicLoadingScreen = NULL;
    this->LastManStandingLives.AddDefaulted(4);
    this->PauseDemoLoadScreen = false;
    this->DemoLoadingScreenWidget = NULL;
    this->DemoToolTip = 0;
    this->WorldMasterTable = NULL;
    this->GeraldTable = NULL;
    this->ToysTable = NULL;
    this->ESportsDataAsset = NULL;
    this->OrbsPercentage = 30;
    this->AcedPercentage = 20;
    this->PrizeBubblesPercentage = 20;
    this->CostumesPercentage = 30;
    this->GameWorldID = ELevelType::None;
    this->GameWorldStyle = ELevelType::None;
    this->GameLevelID = -1;
    this->PlayedWorldID = ELevelType::None;
    this->PlayedLevelID = -1;
    this->CostumeManager = CreateDefaultSubobject<UCostumeManager>(TEXT("CostumeManager"));
    this->DLCMetadata = CreateDefaultSubobject<UDLCMetadata>(TEXT("DLCMetadata"));
    this->AnimationMetadata = CreateDefaultSubobject<UAnimationMetadata>(TEXT("AnimMetaData"));
    this->CollectabellsMetadata = CreateDefaultSubobject<UCollectabellsMetadata>(TEXT("CollectabellsMetadata"));
    this->PinManager = CreateDefaultSubobject<UPinManager>(TEXT("PinManager"));
    this->AchievementManager = NULL;
    this->SkinnedMeshInstanceManager = CreateDefaultSubobject<USkinnedMeshInstanceManager>(TEXT("SkinnedMeshInstanceManager"));
    this->ToyDisengagementTutorialActorClass = NULL;
    this->SnowballDisengagementTutorialActorClass = NULL;
    this->bShouldPlayPodCutscene = false;
    this->SessionManager = NULL;
    this->PlayerManager = NULL;
    this->PlayerJoinManager = NULL;
    this->NetworkActorSync = NULL;
    this->SaveGameManager = NULL;
    this->LoadingScreenWidget = NULL;
    this->UnlockManager = NULL;
    this->DLCManager = NULL;
    this->TSSManager = NULL;
    this->PS4PS5SaveGameTransfer = NULL;
    this->AvatarManager = NULL;
    this->TelemetryManager = NULL;
    this->TutorialTriggerManager = NULL;
    this->RemoteSettingsManager = NULL;
    this->GameplayLevelDataStore = NULL;
    this->CurrentWorldMapPreviewArea = ELevelType::None;
    this->PlayGoManager = NULL;
    this->HierarchicalTagManager = NULL;
    this->PhysicsSceneManager = NULL;
    this->TournamentManager = NULL;
    this->PSNLinkManager = NULL;
    this->bIsOnSteamDeck = false;
    this->SteamDeckControllerIndex = -1;
}

void UGingerBreadGameInstance::UpdateDynamicNetTimeout() {
}

bool UGingerBreadGameInstance::TryShowGamepadTextInput(const FString& OriginalText, int32 MaxLength) {
    return false;
}

void UGingerBreadGameInstance::SwitchOnLevelLoadType(ELevelLoadType& Out_LoadType) {
}

void UGingerBreadGameInstance::SwitchOnHostEndOfGameFlowState(EEndOfGameFlowState& Out_FlowState) {
}

void UGingerBreadGameInstance::SwitchOnEndOfGameFlowState(EEndOfGameFlowState& Out_FlowState, const FGingerbreadPlayerId& PlayerId) {
}

void UGingerBreadGameInstance::SwapButtonRemaps(FGingerbreadPlayerId PlayerId, ERemappable_Buttons Key_1, ERemappable_Buttons Key_2) {
}

bool UGingerBreadGameInstance::ShowNetworkUI() const {
    return false;
}

bool UGingerBreadGameInstance::ShouldSpawnAtLevelBadge() const {
    return false;
}

bool UGingerBreadGameInstance::ShouldPlayPodCutscene() const {
    return false;
}

void UGingerBreadGameInstance::SetVoiceChatEnabled(bool Enabled) {
}

void UGingerBreadGameInstance::SetVibrationScale(float Scale, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetUseRightStickToTilt(bool Enabled, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetUseControllerAudio(bool Enabled, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetTriggerMode(bool Enabled, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetTextCulture(EGingerbreadCultureType CultureToSet, bool SaveOnly) {
}

void UGingerBreadGameInstance::SetTelemetryConsent(bool newSelection) {
}

void UGingerBreadGameInstance::SetSubtitleSpeakerStyle(int32 newSelection) {
}

void UGingerBreadGameInstance::SetSubtitleSize(int32 newSelection) {
}

void UGingerBreadGameInstance::SetSubtitleMode(int32 newSelection) {
}

void UGingerBreadGameInstance::SetSubtitleDyslexiaFont(bool newSelection) {
}

void UGingerBreadGameInstance::SetSubtitleAlpha(float Alpha) {
}

void UGingerBreadGameInstance::SetStickSwap(bool Enabled, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetStartingSpawnPointName(FName spawn_point_name) {
}

void UGingerBreadGameInstance::SetSeenFirstTimeScreen(const FGingerbreadPlayerId& PlayerId) {
}

void UGingerBreadGameInstance::SetRollToHold(bool Enabled, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetRenderQuality(ERenderQualityTypes Type, float Value) {
}

void UGingerBreadGameInstance::SetPowerupEverBeenEquipped(const FGingerbreadPlayerId& PlayerId, EControlMode ControlMode) {
}

void UGingerBreadGameInstance::SetPlayLoadingTransition() {
}

void UGingerBreadGameInstance::SetOuterDeadzone(float Amount, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetLevelIntroSequenceEnabled(bool Enabled) {
}

void UGingerBreadGameInstance::SetIsRenaming(bool renaming) {
}

void UGingerBreadGameInstance::SetIsMidLevelRetry(bool mid_level_retry) {
}

void UGingerBreadGameInstance::SetInvertYAxis(bool Enabled, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetInvertXAxis(bool Enabled, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetInnerDeadzone(float Amount, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetHostUseBossPodPlatform(bool bUseBossPodPlatform) {
}

void UGingerBreadGameInstance::SetHostEndOfGameFlowState(EEndOfGameFlowState FlowState) {
}

void UGingerBreadGameInstance::SetHairQuality(bool on) {
}

void UGingerBreadGameInstance::SetGrabToToggle(bool Enabled, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetGamma(float NewGamma) {
}

void UGingerBreadGameInstance::SetFlutterToggle(bool Enabled, FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::SetExternalUIBlockingInput(bool bBlocking) {
}

void UGingerBreadGameInstance::SetEnvironmentalFuzz(bool on) {
}

void UGingerBreadGameInstance::SetEndOfGameFlowState(EEndOfGameFlowState FlowState, const FGingerbreadPlayerId& PlayerId) {
}

void UGingerBreadGameInstance::SetColourblindProfile(int32 newSelection) {
}

void UGingerBreadGameInstance::SetAudioCulture(EGingerbreadCultureType CultureToSet, bool SaveOnly) {
}

void UGingerBreadGameInstance::SetAllowCameraShake(bool newSelection) {
}

void UGingerBreadGameInstance::SetActivePowerUp(EControlMode power_up) {
}

void UGingerBreadGameInstance::SetActiveGloopMode(bool Enabled) {
}

void UGingerBreadGameInstance::RevertGraphicSettings() {
}

void UGingerBreadGameInstance::ResetGameAssits(FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::ResetDisplaySettings() {
}

void UGingerBreadGameInstance::ResetControllerSettings(FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::ResetControllerRemapsToDefault(FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::ResetAudioSettings() {
}

void UGingerBreadGameInstance::ResetAllControlSettings(FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::RequestZoneUnlockSave(const FGingerbreadPlayerId& player_id) {
}

void UGingerBreadGameInstance::RequestSavePlayerData(const FGingerbreadPlayerId& player_id) {
}

void UGingerBreadGameInstance::RequestSaveAllLocalPlayerData() {
}

void UGingerBreadGameInstance::RequestLoadImage(const FGingerbreadPlayerId& player_id, ImageSetId set_id, const FName& image_id, UObject* cb_object) {
}

void UGingerBreadGameInstance::RequestLevelCompletionSave(const FGingerbreadPlayerId& player_id) {
}

bool UGingerBreadGameInstance::PlayLoadingTransition() const {
    return false;
}

void UGingerBreadGameInstance::OnPreMapSwap(const FString& MapName) {
}

void UGingerBreadGameInstance::OnPlayerJoined(const FGingerbreadPlayerId& PlayerId, ASackboy* Sackboy) {
}

void UGingerBreadGameInstance::OnGamepadTextInputDismissed(const FString& NewText, bool Completed) {
}

void UGingerBreadGameInstance::NotifyHudComponentFromScreenDeferredCreated(const FName ScreenName, UGingerbreadHUDComponent* HUDComponent) {
}

void UGingerBreadGameInstance::MonitorRealTimeMultiplay() {
}

void UGingerBreadGameInstance::LinkEpicAccount() {
}

bool UGingerBreadGameInstance::IsSteamOnlineSubsystem() {
    return false;
}

bool UGingerBreadGameInstance::IsOnSteamDeck() const {
    return false;
}

bool UGingerBreadGameInstance::IsLevelIntroSequenceEnabled() const {
    return false;
}

bool UGingerBreadGameInstance::IsInWorldMapPreviewArea() const {
    return false;
}

bool UGingerBreadGameInstance::IsEpicAccountLinked() {
    return false;
}

void UGingerBreadGameInstance::IncrementPlayedTimes() {
}

void UGingerBreadGameInstance::HideSlateLoadingScreen() {
}

bool UGingerBreadGameInstance::HasVersionFlag(EVersionFlag Flag) const {
    return false;
}

bool UGingerBreadGameInstance::HasPowerupEverBeenEquipped(const FGingerbreadPlayerId& PlayerId, EControlMode ControlMode) {
    return false;
}

bool UGingerBreadGameInstance::HasJustPlayedALevel() const {
    return false;
}

bool UGingerBreadGameInstance::HasInternetConnection() const {
    return false;
}

bool UGingerBreadGameInstance::HasCultureBeenApplied() const {
    return false;
}

UDataTable* UGingerBreadGameInstance::GetZoneTable(const ELevelType WorldID) const {
    return NULL;
}

bool UGingerBreadGameInstance::GetVoiceChatEnabled() const {
    return false;
}

float UGingerBreadGameInstance::GetVibrationScale(FGingerbreadPlayerId PlayerId) const {
    return 0.0f;
}

bool UGingerBreadGameInstance::GetUseRightStickToTilt(FGingerbreadPlayerId PlayerId) const {
    return false;
}

bool UGingerBreadGameInstance::GetUseControllerAudio(FGingerbreadPlayerId PlayerId) const {
    return false;
}

bool UGingerBreadGameInstance::GetTriggerMode(FGingerbreadPlayerId PlayerId) const {
    return false;
}

EGingerbreadCultureType UGingerBreadGameInstance::GetTextCulture() const {
    return EGingerbreadCultureType::English_GB;
}

bool UGingerBreadGameInstance::GetTelemetryConsent() const {
    return false;
}

int32 UGingerBreadGameInstance::GetSubtitleSpeakerStyle() const {
    return 0;
}

int32 UGingerBreadGameInstance::GetSubtitleSize() const {
    return 0;
}

int32 UGingerBreadGameInstance::GetSubtitleMode() const {
    return 0;
}

bool UGingerBreadGameInstance::GetSubtitleDyslexiaFont() const {
    return false;
}

float UGingerBreadGameInstance::GetSubtitleAlpha() const {
    return 0.0f;
}

bool UGingerBreadGameInstance::GetStickSwap(FGingerbreadPlayerId PlayerId) const {
    return false;
}

int32 UGingerBreadGameInstance::GetSteamDeckControllerIndex() {
    return 0;
}

FName UGingerBreadGameInstance::GetStartingSpawnPointName() const {
    return NAME_None;
}

bool UGingerBreadGameInstance::GetShouldSwapEnterAndBackInputs() const {
    return false;
}

ESharedLifeMode UGingerBreadGameInstance::GetSharedLifeMode() const {
    return ESharedLifeMode::NewLastStand;
}

float UGingerBreadGameInstance::GetSFXVolume() const {
    return 0.0f;
}

bool UGingerBreadGameInstance::GetSeenFirstTimeScreen(const FGingerbreadPlayerId& PlayerId) const {
    return false;
}

FName UGingerBreadGameInstance::GetRowIDFromRemappableKey(FGingerbreadPlayerId PlayerId, ERemappable_Buttons Key) {
    return NAME_None;
}

bool UGingerBreadGameInstance::GetRollToHold(FGingerbreadPlayerId PlayerId) const {
    return false;
}

void UGingerBreadGameInstance::GetRenderQualityRange(ERenderQualityTypes Type, float& Min, float& Max, float& increment) {
}

float UGingerBreadGameInstance::GetRenderQuality(ERenderQualityTypes Type) {
    return 0.0f;
}

FGingerbreadPlayerId UGingerBreadGameInstance::GetPrimaryLocalPlayerId() const {
    return FGingerbreadPlayerId{};
}

ULoadSaveWrapper* UGingerBreadGameInstance::GetPlayerLoadSaveData(const FGingerbreadPlayerId& player_id) const {
    return NULL;
}

void UGingerBreadGameInstance::GetPlayedLevelIDs(ELevelType& WorldID, int32& LevelID) const {
}

float UGingerBreadGameInstance::GetOuterDeadzone(FGingerbreadPlayerId PlayerId) const {
    return 0.0f;
}

float UGingerBreadGameInstance::GetMusicVolume() const {
    return 0.0f;
}

UDataTable* UGingerBreadGameInstance::GetLevelTable(const ELevelType WorldID) const {
    return NULL;
}

ELevelLoadType UGingerBreadGameInstance::GetLevelLoadType() const {
    return ELevelLoadType::FreshLoad;
}

bool UGingerBreadGameInstance::GetIsMidLevelRetry() const {
    return false;
}

bool UGingerBreadGameInstance::GetIsLevelRetry() const {
    return false;
}

bool UGingerBreadGameInstance::GetInvertYAxis(FGingerbreadPlayerId PlayerId) const {
    return false;
}

bool UGingerBreadGameInstance::GetInvertXAxis(FGingerbreadPlayerId PlayerId) const {
    return false;
}

float UGingerBreadGameInstance::GetInnerDeadzone(FGingerbreadPlayerId PlayerId) const {
    return 0.0f;
}

void UGingerBreadGameInstance::GetHudComponentFromScreenDeferred(const FName ScreenName, const TSubclassOf<UGingerbreadHUDComponent> HudComponentClass, const FGetHudComponentDeferredDelegate& Callback) {
}

bool UGingerBreadGameInstance::GetHostUseBossPodPlatform() const {
    return false;
}

EEndOfGameFlowState UGingerBreadGameInstance::GetHostEndOfGameFlowState() const {
    return EEndOfGameFlowState::Unknown;
}

bool UGingerBreadGameInstance::GetHairQuality() {
    return false;
}

bool UGingerBreadGameInstance::GetGrabToToggle(FGingerbreadPlayerId PlayerId) const {
    return false;
}

float UGingerBreadGameInstance::GetGamma() const {
    return 0.0f;
}

UGameplayLevelDataStore* UGingerBreadGameInstance::GetGameplayLevelDataStore() const {
    return NULL;
}

EGamePlatform UGingerBreadGameInstance::GetGamePlatform() {
    return EGamePlatform::Other;
}

FPersistentLevelData2 UGingerBreadGameInstance::GetGameLevelSaveData(const FGingerbreadPlayerId& PlayerId) const {
    return FPersistentLevelData2{};
}

bool UGingerBreadGameInstance::GetFlutterToggle(FGingerbreadPlayerId PlayerId) const {
    return false;
}

bool UGingerBreadGameInstance::GetEnvironmentalFuzz() {
    return false;
}

EEndOfGameFlowState UGingerBreadGameInstance::GetEndOfGameFlowState(const FGingerbreadPlayerId& PlayerId) const {
    return EEndOfGameFlowState::Unknown;
}

float UGingerBreadGameInstance::GetDialogueVolume() const {
    return 0.0f;
}

UDataTable* UGingerBreadGameInstance::GetCurrentZoneTable() const {
    return NULL;
}

ELevelType UGingerBreadGameInstance::GetCurrentWorldMapPreviewArea() const {
    return ELevelType::Himalaya;
}

EGingerbreadSKUType UGingerBreadGameInstance::GetCurrentSkuType() const {
    return EGingerbreadSKUType::INVALID;
}

FGingerbreadSkuRow UGingerBreadGameInstance::GetCurrentSkuDataRow() const {
    return FGingerbreadSkuRow{};
}

UDataTable* UGingerBreadGameInstance::GetCurrentLevelTable() const {
    return NULL;
}

EGingerbreadCultureType UGingerBreadGameInstance::GetCultureTypeForCode(const FString& CultureCode) const {
    return EGingerbreadCultureType::English_GB;
}

FGingerbreadCultureRow UGingerBreadGameInstance::GetCultureDataRow(EGingerbreadCultureType CultureType) const {
    return FGingerbreadCultureRow{};
}

FString UGingerBreadGameInstance::GetCultureCodeForType(EGingerbreadCultureType CultureType) const {
    return TEXT("");
}

int32 UGingerBreadGameInstance::GetColourblindProfile() const {
    return 0;
}

EGingerbreadCultureType UGingerBreadGameInstance::GetAudioCulture() const {
    return EGingerbreadCultureType::English_GB;
}

bool UGingerBreadGameInstance::GetAllowCameraShake() const {
    return false;
}

TArray<FGingerbreadPlayerId> UGingerBreadGameInstance::GetAllLocalPlayerIds() const {
    return TArray<FGingerbreadPlayerId>();
}

EControlMode UGingerBreadGameInstance::GetActivePowerUp() const {
    return EControlMode::None;
}

bool UGingerBreadGameInstance::GetActiveGloopMode() const {
    return false;
}

void UGingerBreadGameInstance::EndLoadingScreen(UWorld* World) {
}

bool UGingerBreadGameInstance::DoesCurrentCultureSupportDyslexic() const {
    return false;
}

bool UGingerBreadGameInstance::DoesCultureSupportDyslexic(EGingerbreadCultureType CultureType) const {
    return false;
}

void UGingerBreadGameInstance::CrossPlatformTransfer_RestartApplication() const {
}

void UGingerBreadGameInstance::CrossPlatformTransfer_RequestUpload(const FGingerbreadPlayerId& player_id) {
}

void UGingerBreadGameInstance::CrossPlatformTransfer_RequestExist(const FGingerbreadPlayerId& player_id) {
}

void UGingerBreadGameInstance::CrossPlatformTransfer_RequestDownload(const FGingerbreadPlayerId& player_id) {
}

void UGingerBreadGameInstance::CrossPlatformTransfer_OnUploadFinished(ECrossPlatformExportResult Result, const FGingerbreadPlayerId& PlayerId) {
}

void UGingerBreadGameInstance::CrossPlatformTransfer_OnSaveFinished(ECrossPlatformExportResult Result) {
}

void UGingerBreadGameInstance::CrossPlatformTransfer_OnExistFinished(ECrossPlatformExportResult Result, const FGingerbreadPlayerId& PlayerId) {
}

void UGingerBreadGameInstance::CrossPlatformTransfer_OnDownloadFinished(ECrossPlatformExportResult Result, const FString& jsonString, const FGingerbreadPlayerId& PlayerId) {
}

bool UGingerBreadGameInstance::CrossPlatformTransfer_GetExportData(const FGingerbreadPlayerId& player_id, FString& resultJson) const {
    return false;
}

void UGingerBreadGameInstance::CrossPlatformTransfer_CheckApplyComplete() {
}

void UGingerBreadGameInstance::ConfirmGraphicSettings() {
}

void UGingerBreadGameInstance::ClearPlayLoadingTransition() {
}

void UGingerBreadGameInstance::BeginLoadingScreen(const FString& MapName) {
}

void UGingerBreadGameInstance::ApplyControllerRemapsForPlayer(FGingerbreadPlayerId PlayerId) {
}

void UGingerBreadGameInstance::ApplyControllerRemaps() {
}

bool UGingerBreadGameInstance::AnyGraphicChanges() {
    return false;
}

bool UGingerBreadGameInstance::AllowSaveDataTransfer() const {
    return false;
}


