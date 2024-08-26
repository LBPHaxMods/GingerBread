#include "GingerbreadNotificationHUDComponent.h"

UGingerbreadNotificationHUDComponent::UGingerbreadNotificationHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericNotificationTable = NULL;
    this->SearchResultShowTime = 0.00f;
    this->PrizeTier = EESportsTier::Bronze;
    this->TargetWorldSelectId = ELevelType::None;
    this->CostumePartPermission = NULL;
    this->ScreenTransitionOnTime = 0.60f;
    this->ScreenTransitionOffTime = 0.60f;
    this->ProgressionActor = NULL;
    this->SessionManager = NULL;
    this->AvatarManager = NULL;
    this->LocalPlayer = NULL;
}

int32 UGingerbreadNotificationHUDComponent::TutorialNotification(const FEventNotification& Data) {
    return 0;
}

void UGingerbreadNotificationHUDComponent::StartQuickJoin(UGingerbreadSessionManager* NewSessionManager, ULocalPlayer* NewLocalPlayer, bool CrossGen) {
}

void UGingerbreadNotificationHUDComponent::StartHostingSession(UGingerbreadSessionManager* NewSessionManager, ULocalPlayer* NewLocalPlayer, bool FriendsOnly, bool CrossGen, bool InviteAfter) {
}

void UGingerbreadNotificationHUDComponent::ShowWorldProgression(UTexture2D* Icon, FText Text) {
}

void UGingerbreadNotificationHUDComponent::ShowShopProgression(FText Number) {
}

void UGingerbreadNotificationHUDComponent::ShowMemoryProgression(int32 Number) {
}


void UGingerbreadNotificationHUDComponent::SetPlayerControllerOnNotification(int32 NotificationId, AGingerbreadPlayerController* PlayerId) {
}

void UGingerbreadNotificationHUDComponent::SetCostumeNoPermissionCallback(const FNotificationResult& Callback) {
}


void UGingerbreadNotificationHUDComponent::RefreshQueuePausedStatus() {
}

int32 UGingerbreadNotificationHUDComponent::PromptNotification(const FPromptNotification& Data) {
    return 0;
}

void UGingerbreadNotificationHUDComponent::OnTournamentPromptTransitionFinished() {
}

void UGingerbreadNotificationHUDComponent::OnTournamentPromptActivated(int32 OptionType) {
}

void UGingerbreadNotificationHUDComponent::OnTournamentLevelUnlockedTransitionFinished() {
}

void UGingerbreadNotificationHUDComponent::OnTournamentLevelUnlockedPromptActivated(int32 OptionType) {
}

void UGingerbreadNotificationHUDComponent::OnScreenPushed(UGingerbreadScreen* screenPushed) {
}

void UGingerbreadNotificationHUDComponent::OnScreenPopped(UGingerbreadScreen* screenPopped) {
}

void UGingerbreadNotificationHUDComponent::OnPlayerReadyToJoinEvent(EPlayerReadyToJoinStatus Status, const FGingerbreadPlayerId& player_id) {
}



void UGingerbreadNotificationHUDComponent::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}


void UGingerbreadNotificationHUDComponent::OnNoGameFoundCallback(int32 Result) {
}

void UGingerbreadNotificationHUDComponent::OnLocalCoopVisiblityChanged(bool visible) {
}

void UGingerbreadNotificationHUDComponent::OnLoadingTransitionComplete() {
}

void UGingerbreadNotificationHUDComponent::OnJoinNotificationResult(int32 Result) {
}

void UGingerbreadNotificationHUDComponent::OnJoinInviteNotificationResult(int32 Result) {
}

void UGingerbreadNotificationHUDComponent::OnJoinInviteCallback(int32 Result) {
}

void UGingerbreadNotificationHUDComponent::OnGameSearchErrorCallback(int32 Result) {
}

void UGingerbreadNotificationHUDComponent::OnGamePausedChanged(bool bPaused) {
}

void UGingerbreadNotificationHUDComponent::OnGameFoundCallback(int32 Result) {
}

void UGingerbreadNotificationHUDComponent::OnDLCStorePromptActivated(int32 OptionType) {
}

void UGingerbreadNotificationHUDComponent::OnCutsceneStarted() {
}

void UGingerbreadNotificationHUDComponent::OnCostumeShopTransitionFinished() {
}

void UGingerbreadNotificationHUDComponent::OnCostumeShopPromptActivated(int32 OptionType) {
}

void UGingerbreadNotificationHUDComponent::OnCancelCallback(int32 Result) {
}

int32 UGingerbreadNotificationHUDComponent::MultiSelectNotfication(const FMultiSelectNotification& Data) {
    return 0;
}

int32 UGingerbreadNotificationHUDComponent::MultiplayerRewardNotification(const FEventNotification& Data) {
    return 0;
}

int32 UGingerbreadNotificationHUDComponent::MultiplayerEventNotification(const FEventNotification& Data) {
    return 0;
}

bool UGingerbreadNotificationHUDComponent::IsPromptNotificationOpen() const {
    return false;
}

bool UGingerbreadNotificationHUDComponent::IsNetworkDialogOpen() const {
    return false;
}

bool UGingerbreadNotificationHUDComponent::IsGenericNotificationOpen() const {
    return false;
}

bool UGingerbreadNotificationHUDComponent::IsAnyDialogNotificationActive() const {
    return false;
}

void UGingerbreadNotificationHUDComponent::HideTutorialNotification(bool clearQueue) {
}

void UGingerbreadNotificationHUDComponent::HideNetworkNotification(bool clearQueue) {
}

FDialogNotification UGingerbreadNotificationHUDComponent::GetGenericNotificationDataWithDelegate(FName NotificationName, const FNotificationResult& ResultDelegate) {
    return FDialogNotification{};
}

FDialogNotification UGingerbreadNotificationHUDComponent::GetGenericNotificationData(FName NotificationName) {
    return FDialogNotification{};
}

int32 UGingerbreadNotificationHUDComponent::GenericNotification(const FDialogNotification& Data) {
    return 0;
}

void UGingerbreadNotificationHUDComponent::ClearCostumeNoPermissionCallback() {
}

void UGingerbreadNotificationHUDComponent::CancelNotification(int32 NotificationId) {
}

void UGingerbreadNotificationHUDComponent::CancelGenericNotification() {
}

void UGingerbreadNotificationHUDComponent::BindDropInOut() {
}


