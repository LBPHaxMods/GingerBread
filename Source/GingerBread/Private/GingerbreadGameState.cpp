#include "GingerbreadGameState.h"
#include "Net/UnrealNetwork.h"
#include "NetworkEventComponent.h"

AGingerbreadGameState::AGingerbreadGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GingerbreadCameraManager = NULL;
    this->CheckpointManager = NULL;
    this->TriggerManager = NULL;
    this->Registrar = NULL;
    this->CoolSystem = NULL;
    this->SackboyAppearanceManager = NULL;
    this->SackboyRespawnManager = NULL;
    this->NetworkManager = NULL;
    this->PlayerManager = NULL;
    this->CoordinatorManager = NULL;
    this->DarkMatterEngine = NULL;
    this->DebugManagerInstance = NULL;
    this->DebugOptionsCreator = NULL;
    this->LevelStreamingManager = NULL;
    this->ObjectTickManager = NULL;
    this->GingerbreadEventDispatcher = NULL;
    this->LevelManager = NULL;
    this->LevelSettings = NULL;
    this->MusicManager = NULL;
    this->PickupContainerManager = NULL;
    this->RhythmManager = NULL;
    this->WaterTableManager = NULL;
    this->BabyMonkeySpawnerManager = NULL;
    this->CutsceneManager = NULL;
    this->LoadingSyncManager = NULL;
    this->GameplayAudioManager = NULL;
    this->PhysicsAudioSystem = NULL;
    this->LevelResetManager = NULL;
    this->HitPointsManager = NULL;
    this->TimedChallenge = NULL;
    this->RemixSpotlightManager = NULL;
    this->RemixDroneManager = NULL;
    this->RemixGauntlet = NULL;
    this->GingerbreadSubtitleManager = NULL;
    this->VertexAnimatedMeshManager = NULL;
    this->CameraEffectManager = NULL;
    this->ShatteredOrbManager = NULL;
    this->TutorialTriggerInjector = NULL;
    this->FlameJet2Manager = NULL;
    this->ScoreBubbleManager = NULL;
    this->BonusRoomManager = NULL;
    this->CrumplerManager = NULL;
    this->BoomblebeeManager = NULL;
    this->PufferFishTickManager = NULL;
    this->MusicStateManager = NULL;
    this->NonReplicatedManagers = 0;
    this->bInfinitePlayerLives = false;
    this->GamestateReady = false;
    this->IntroCutscenePlayed = false;
    this->DebugNetworkQualitySelectedByUser = -1;
    this->MatchStatus = EGingerbreadMatchStatus::None;
    this->SessionFriendsOnly = false;
    this->SessionCrossPlatform = false;
    this->MidLevelRetry = false;
    this->ActiveCameraSnaps = false;
    this->PlayerInCannon = false;
    this->bIsCheckpointSFXEnabled = true;
    this->bLivesSystemEnabled = true;
    this->bStartInLastManStanding = false;
    this->AllPlayersDiedBehaviour = EAllPlayersDiedBehaviour::LevelResetIfEnabled_Respawn;
    this->bDisableOffScreenCheck = false;
    this->GlobalGloopOnFeet = false;
    this->LastManStandingActive = false;
    this->LastManStandingLivesLeft = 4;
    this->NFNumPlayers = -1;
    this->NFLivePlayers = -1;
    this->NFMaxLives = -1;
    this->NFCurrentLives = -1;
    this->mpHUD = NULL;
    this->bPendingNetworkHostSync = false;
    this->NetworkEventComponent = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComponent"));
}

void AGingerbreadGameState::TriggerNetworkEvent(const FName& EventName, bool needSync) {
}

void AGingerbreadGameState::SetInstantSpawningEnabled(bool Enabled) {
}

void AGingerbreadGameState::SetInfiniteLives(bool InfiniteLives) {
}

void AGingerbreadGameState::SetGlobalControlMode(ASackboy* modeChangeInstigator, EControlMode Mode) {
}

void AGingerbreadGameState::ResetLives(bool ReplenishFromPickup) {
}

bool AGingerbreadGameState::RequestReduceLives() {
    return false;
}

void AGingerbreadGameState::RefreshLives() {
}

void AGingerbreadGameState::OnSaveCreated(const FGingerbreadPlayerId& InPlayerID) {
}

void AGingerbreadGameState::OnRep_ValidSessionPlayersChanged() {
}

void AGingerbreadGameState::OnRep_SessionPrivacySettingsChanged() const {
}

void AGingerbreadGameState::OnRep_NonReplicatedManagersChanged() {
}

void AGingerbreadGameState::OnRep_NFLastManStandingUI() {
}

void AGingerbreadGameState::OnRep_MatchStatusChanged() {
}

void AGingerbreadGameState::OnRep_InfiniteLivesChanged() {
}

void AGingerbreadGameState::OnRep_HostSharedPersistentPlayerData() {
}

void AGingerbreadGameState::OnRep_GlobalControlModeState() {
}

void AGingerbreadGameState::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void AGingerbreadGameState::OnNetworkEventInternal(FName EventName) {
}

TEnumAsByte<EPickupCollectionResult> AGingerbreadGameState::OnLifePickupCollected(ASackboy* theSackboy, TEnumAsByte<EHealthPickupType> lifePickup) {
    return Consumed;
}

void AGingerbreadGameState::OnJoinedPlayerCountChanged(int32 Count) {
}

void AGingerbreadGameState::OnInitialPlayerCountAvailable(const FString& Level, int32 Count) {
}

void AGingerbreadGameState::OnHeartCollected(ASackboy* collector) {
}

void AGingerbreadGameState::NetMulticast_UpdateLevelCompletionTrophies_Implementation() {
}

void AGingerbreadGameState::NetMulticast_OnPreMapLoad_Implementation(const FString& NextMap) {
}

void AGingerbreadGameState::NetMulticast_AwardTrophyLearnedSquire_Implementation() {
}

void AGingerbreadGameState::NetMulticast_AwardTrophyDayDream_Implementation() {
}

void AGingerbreadGameState::NetMulticast_AwardTrophyCutItOut_Implementation() {
}

void AGingerbreadGameState::NetMulticast_AllSackboysDancing_Implementation() {
}

void AGingerbreadGameState::MulticastShowCutSceneUI_Implementation(bool show_blackbars, bool show_skip_cutscene_prompt, bool show_skip_speech_prompt, bool show_title_screen, bool show_vote_skips, bool show_next_and_skip_prompt) {
}

bool AGingerbreadGameState::IsLivesSystemEnabled(bool bAlsoCheckLevelSettings) const {
    return false;
}

bool AGingerbreadGameState::IsLastManStandingActive() const {
    return false;
}

bool AGingerbreadGameState::IsInstantSpawnEnabled() const {
    return false;
}

bool AGingerbreadGameState::IsInfiniteLives() {
    return false;
}

bool AGingerbreadGameState::IsHostSaveDataReady() const {
    return false;
}

bool AGingerbreadGameState::IsEndSequenceActive() const {
    return false;
}

bool AGingerbreadGameState::InCutSceneMode() {
    return false;
}

int32 AGingerbreadGameState::GetRemainingLives() const {
    return 0;
}

int32 AGingerbreadGameState::GetMaxSharedLifeCount() const {
    return 0;
}

EControlMode AGingerbreadGameState::GetGlobalControlMode() const {
    return EControlMode::None;
}

EAllPlayersDiedBehaviour AGingerbreadGameState::GetAllPlayersDiedBehaviour() const {
    return EAllPlayersDiedBehaviour::Respawn;
}

void AGingerbreadGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGingerbreadGameState, NonReplicatedManagers);
    DOREPLIFETIME(AGingerbreadGameState, bInfinitePlayerLives);
    DOREPLIFETIME(AGingerbreadGameState, DebugNetworkQualitySelectedByUser);
    DOREPLIFETIME(AGingerbreadGameState, MatchID);
    DOREPLIFETIME(AGingerbreadGameState, MatchStatus);
    DOREPLIFETIME(AGingerbreadGameState, TelemetryGameId);
    DOREPLIFETIME(AGingerbreadGameState, SessionFriendsOnly);
    DOREPLIFETIME(AGingerbreadGameState, SessionCrossPlatform);
    DOREPLIFETIME(AGingerbreadGameState, ValidSessionPlayers);
    DOREPLIFETIME(AGingerbreadGameState, MidLevelRetry);
    DOREPLIFETIME(AGingerbreadGameState, ActiveCameraSnaps);
    DOREPLIFETIME(AGingerbreadGameState, PlayerInCannon);
    DOREPLIFETIME(AGingerbreadGameState, CannonPos);
    DOREPLIFETIME(AGingerbreadGameState, bDisableOffScreenCheck);
    DOREPLIFETIME(AGingerbreadGameState, GlobalControlModeState);
    DOREPLIFETIME(AGingerbreadGameState, GlobalGloopOnFeet);
    DOREPLIFETIME(AGingerbreadGameState, LastManStandingActive);
    DOREPLIFETIME(AGingerbreadGameState, LastManStandingLivesLeft);
    DOREPLIFETIME(AGingerbreadGameState, NFNumPlayers);
    DOREPLIFETIME(AGingerbreadGameState, NFLivePlayers);
    DOREPLIFETIME(AGingerbreadGameState, NFMaxLives);
    DOREPLIFETIME(AGingerbreadGameState, NFCurrentLives);
    DOREPLIFETIME(AGingerbreadGameState, HostSharedPersistentPlayerData);
}


