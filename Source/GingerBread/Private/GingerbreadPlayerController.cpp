#include "GingerbreadPlayerController.h"
#include "MusicManagerNetworkProxy.h"

AGingerbreadPlayerController::AGingerbreadPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bAutoManageActiveCameraTarget = false;
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    this->ControlComponent = NULL;
    this->KeyName_Pause = TEXT("PAUSE");
    this->KeyName_MenuSelect = TEXT("UI_START");
    this->KeyName_ShowCoOpUIKeyboard = TEXT("COOP_CONTROLLERS_KB");
    this->KeyName_ShowCoOpUIGamepad = TEXT("COOP_CONTROLLERS_GAMEPAD");
    this->KeyName_Debug_Shotcurt = TEXT("DEBUG_SHORTCUT");
    this->KeyName_PIEPause = TEXT("PIE_PAUSE");
    this->KeyIconCollection = NULL;
    this->MusicManagerNetworkProxy = CreateDefaultSubobject<UMusicManagerNetworkProxy>(TEXT("MusicManagerNetworkProxy"));
    this->bWantOverrideAudioListener = false;
    this->bForceHapticsEnabled = false;
    this->bEnableMouseEvents = true;
}

void AGingerbreadPlayerController::UpdateAllWidgetGlyphs() {
}

void AGingerbreadPlayerController::UnbindVectorAxisAction(const FName Action, const FVectorAxisActionDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::UnbindReleasedActions(const FName Action, const UObject* Object) {
}

void AGingerbreadPlayerController::UnbindReleasedAction(const FName Action, const FKeyActionDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::UnbindPressedActions(const FName Action, const UObject* Object) {
}

void AGingerbreadPlayerController::UnbindPressedAction(const FName Action, const FKeyActionDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::UnbindDownActions(const FName Action, const UObject* Object) {
}

void AGingerbreadPlayerController::UnbindDownAction(const FName Action, const FKeyActionDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::UnbindAxisActions(const FName Action, const UObject* Object) {
}

void AGingerbreadPlayerController::UnbindAxisAction(const FName Action, const FAxisActionDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::UnbindAllActions(const UObject* Object) {
}

void AGingerbreadPlayerController::TogglePauseState(bool openToDebug) {
}

void AGingerbreadPlayerController::SetStickSwap(bool Swap) {
}

void AGingerbreadPlayerController::SetOuterDeadzone(float Amount) {
}

void AGingerbreadPlayerController::SetInvertYAxis(bool Invert) {
}

void AGingerbreadPlayerController::SetInvertXAxis(bool Invert) {
}

void AGingerbreadPlayerController::SetInnerDeadzone(float Amount) {
}

void AGingerbreadPlayerController::SetForceFeedbackScale(float InScale) {
}

void AGingerbreadPlayerController::SetCanMouseBeShown(bool canShow) {
}

void AGingerbreadPlayerController::SetCameraShakeEnabled(bool InEnabled) {
}

void AGingerbreadPlayerController::ServerUnmuteNonBlockedPlayer_Implementation(FUniqueNetIdRepl PlayerId) {
}

void AGingerbreadPlayerController::ServerSetHapticsSupport_Implementation(bool bSetHapticSupport) {
}

void AGingerbreadPlayerController::ServerRequestKick_Implementation(EKickReason KickReason) {
}
bool AGingerbreadPlayerController::ServerRequestKick_Validate(EKickReason KickReason) {
    return true;
}

void AGingerbreadPlayerController::ServerMuteBlockedPlayer_Implementation(FUniqueNetIdRepl PlayerId) {
}

void AGingerbreadPlayerController::Server_NetworkSkipPressed_Implementation(AGingerbreadLevelSequenceActor* Object) {
}

void AGingerbreadPlayerController::Server_LoadingFinished_Implementation() {
}

void AGingerbreadPlayerController::ResumePauseGame(bool PAUSE) {
}

void AGingerbreadPlayerController::ResetControllerOrientation() {
}

void AGingerbreadPlayerController::ReleaseKeyForAction(const FName Action) {
}

void AGingerbreadPlayerController::RegisterUpdateGlyphCallback(const FUpdateGlyphDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::PressKeyForAction(const FName Action) {
}

void AGingerbreadPlayerController::OnSaveLoaded(const FGingerbreadPlayerId& PlayerId) {
}

void AGingerbreadPlayerController::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void AGingerbreadPlayerController::Net_Server_NotifySavedPrizeTier_Implementation(const int32 PrizeTier) {
}

bool AGingerbreadPlayerController::IsShowingMouse() const {
    return false;
}

bool AGingerbreadPlayerController::IsOnScreen(UObject* world_context_object, const FVector& world_position, ECameraSettingsType CameraSettingsType) {
    return false;
}

bool AGingerbreadPlayerController::IsNetworkGameHost() const {
    return false;
}

bool AGingerbreadPlayerController::IsMouseInputActive() const {
    return false;
}

bool AGingerbreadPlayerController::IsKeyboardMouseAssigned() const {
    return false;
}

bool AGingerbreadPlayerController::IsGamepadControllerPlaystation() const {
    return false;
}

bool AGingerbreadPlayerController::IsGamepadAssignedOfType(TEAControllerType Type) const {
    return false;
}

bool AGingerbreadPlayerController::IsDownIgnoreControlSchemeSwitch(const FName Action) {
    return false;
}

bool AGingerbreadPlayerController::IsDown(const FName Action) {
    return false;
}

bool AGingerbreadPlayerController::IsCanPause() const {
    return false;
}

bool AGingerbreadPlayerController::IsButtonInputBlocked() const {
    return false;
}

bool AGingerbreadPlayerController::IsActiveControllerPlaystation() const {
    return false;
}

bool AGingerbreadPlayerController::HasGamepadAssigned() const {
    return false;
}

FString AGingerbreadPlayerController::GetTeaControllerType() const {
    return TEXT("");
}

TEAControllerType AGingerbreadPlayerController::GetSteamInputAdjustedControllerType(TEAControllerType Type) const {
    return TEAControllerType::None;
}

bool AGingerbreadPlayerController::GetScreenPosition(UObject* world_context_object, const FVector& world_position, FVector2D& screen_position, ECameraSettingsType CameraSettingsType) {
    return false;
}

ASackboy* AGingerbreadPlayerController::GetSackboy() const {
    return NULL;
}

AGingerbreadPlayerState* AGingerbreadPlayerController::GetPlayerState() const {
    return NULL;
}

EPlayerSlot AGingerbreadPlayerController::GetPlayerSlot() const {
    return EPlayerSlot::PLAYER_SLOT_1;
}

uint8 AGingerbreadPlayerController::GetNetPlayerIndex() const {
    return 0;
}

FKey AGingerbreadPlayerController::GetMappedKeyForAction(const FName& Action, TEAInputType inputType) const {
    return FKey{};
}

int32 AGingerbreadPlayerController::GetLocalControllerId() const {
    return 0;
}

UTexture2D* AGingerbreadPlayerController::GetIconForKey(const FKey& InputKey, TEAInputType inputType) const {
    return NULL;
}

UTexture2D* AGingerbreadPlayerController::GetIconForControllerType(TEAControllerType Type) const {
    return NULL;
}

UTexture2D* AGingerbreadPlayerController::GetIconForActiveGamepad() const {
    return NULL;
}

UTexture2D* AGingerbreadPlayerController::GetIconForAction(FName ActionName) const {
    return NULL;
}

bool AGingerbreadPlayerController::GetHapticsSupport() const {
    return false;
}

UWorld* AGingerbreadPlayerController::GetCurrentWorld() {
    return NULL;
}

bool AGingerbreadPlayerController::GetCanMouseBeShown() {
    return false;
}

TEAControllerType AGingerbreadPlayerController::GetActiveTeaControllerTypeEnum() const {
    return TEAControllerType::None;
}

TEAControllerType AGingerbreadPlayerController::GetActiveGamepadControllerTypeEnum() const {
    return TEAControllerType::None;
}

FName AGingerbreadPlayerController::GetActionInActiveScheme(const TArray<FName> Actions) const {
    return NAME_None;
}

bool AGingerbreadPlayerController::GamepadHasSpeaker() const {
    return false;
}

void AGingerbreadPlayerController::DeregisterUpdateGlyphCallback(const FUpdateGlyphDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::ClientStartSummaryScreen_Implementation() {
}

void AGingerbreadPlayerController::ClientStartLoadingTransition_Implementation(const FString& level_name, ELoadingType loadType) {
}

void AGingerbreadPlayerController::ClientPostEventToGamepad_Implementation(UAkAudioEvent* AkEvent) {
}

void AGingerbreadPlayerController::Client_ShowCollectedBellsFromLevel_Implementation() {
}

bool AGingerbreadPlayerController::CanRename() const {
    return false;
}

void AGingerbreadPlayerController::CanOpenPauseMenu(bool CanOpen) {
}

void AGingerbreadPlayerController::BlockButtonInput(bool blockInput) {
}

void AGingerbreadPlayerController::BindVectorAxisAction(const FName Action, const FVectorAxisActionDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::BindReleasedAction(const FName Action, const FKeyActionDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::BindPressedAction(const FName Action, const FKeyActionDelegate& CustomEvent) {
}

bool AGingerbreadPlayerController::BindKeyKeyboard(const FName& Action, const FKey& Key) {
    return false;
}

bool AGingerbreadPlayerController::BindKeyGamepad(const FName& Action, const FKey& Key) {
    return false;
}

void AGingerbreadPlayerController::BindDownAction(const FName Action, const FKeyActionDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::BindAxisAction(const FName Action, const FAxisActionDelegate& CustomEvent) {
}

void AGingerbreadPlayerController::ApplyTriggerEffectSetup(const FTriggerEffectSetup& TriggerEffectSetup, ETriggerEffectSide Side) {
}

void AGingerbreadPlayerController::ApplyTriggerEffectOverride(const FTriggerEffectSetup& TriggerEffectSetup, ETriggerEffectSide Side, float Duration) {
}


