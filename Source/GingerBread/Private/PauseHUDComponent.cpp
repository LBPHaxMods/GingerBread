#include "PauseHUDComponent.h"

UPauseHUDComponent::UPauseHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TicksWhenPaused = true;
    this->UseSettingsOnlyMode = false;
    this->MinimumGamma = 1.20f;
    this->MaximumGamma = 3.20f;
    this->bIsKnightTrial = false;
    this->mpSessionManager = NULL;
    this->bIsWaitingForFriendsList = false;
}

void UPauseHUDComponent::UpdateSession(bool FriendsOnly, bool CrossPlatform) {
}

void UPauseHUDComponent::ShowPSPlusUpgradeUI(ULocalPlayer* Player) {
}

bool UPauseHUDComponent::ShowPendingInviteIfAvailable() {
    return false;
}

void UPauseHUDComponent::ShowPauseHUD(bool Show) {
}

void UPauseHUDComponent::SetVoiceChatEnabled(bool Enabled) {
}

void UPauseHUDComponent::SetVOFXPercentage(float VOFXPercentage) {
}

void UPauseHUDComponent::SetSFXPercentage(float SFXPercentage) {
}

void UPauseHUDComponent::SetMusicPercentage(float MusicPercentage) {
}

void UPauseHUDComponent::SetGammaPercentage(float GammaPercentage) {
}

void UPauseHUDComponent::SetDialoguePercentage(float DialoguePercentage) {
}

void UPauseHUDComponent::QuitSession(const UPauseHUDComponent::FNetworkSessionDelegate& Callback) {
}


bool UPauseHUDComponent::OpenSystemInviteMenu() {
    return false;
}




void UPauseHUDComponent::OnPlayerReadyToJoinEvent(EPlayerReadyToJoinStatus Status, const FGingerbreadPlayerId& player_id) {
}

void UPauseHUDComponent::OnPlayerCountChanged_Implementation() {
}

void UPauseHUDComponent::OnOnlineFriendsRetrieved(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr) {
}

void UPauseHUDComponent::OnJoinedPlayerCountChanged(int32 Count) {
}

void UPauseHUDComponent::OnInviteMenuSessionCreation(bool Success) {
}


bool UPauseHUDComponent::IsSessionBusy() const {
    return false;
}

bool UPauseHUDComponent::IsInNetworkSession() const {
    return false;
}

bool UPauseHUDComponent::IsCurrentLevelBonus(UObject* WorldContextObject) {
    return false;
}

bool UPauseHUDComponent::InviteFriendThroughOSS(int32 FriendListIndex) {
    return false;
}

bool UPauseHUDComponent::HasPendingInvite() {
    return false;
}

bool UPauseHUDComponent::GetVoiceChatEnabled() {
    return false;
}

float UPauseHUDComponent::GetVOFXPercentage() {
    return 0.0f;
}

float UPauseHUDComponent::GetSFXPercentage() {
    return 0.0f;
}

int32 UPauseHUDComponent::GetSessionPrivacySetting() const {
    return 0;
}

UGingerbreadNotificationHUDComponent* UPauseHUDComponent::GetNotificationHud() const {
    return NULL;
}

float UPauseHUDComponent::GetMusicPercentage() {
    return 0.0f;
}

TArray<int32> UPauseHUDComponent::GetLocalControllerIds() const {
    return TArray<int32>();
}

float UPauseHUDComponent::GetGammaPercentage() {
    return 0.0f;
}

float UPauseHUDComponent::GetDialoguePercentage() {
    return 0.0f;
}

FText UPauseHUDComponent::GetBuildVersionText() {
    return FText::GetEmpty();
}

bool UPauseHUDComponent::GetAnyLevelsCompleted(UObject* WorldContextObject) const {
    return false;
}


void UPauseHUDComponent::EnablePauseHUD(bool Enable) {
}

bool UPauseHUDComponent::CreateSession(const UPauseHUDComponent::FNetworkSessionDelegate& Callback) {
    return false;
}

void UPauseHUDComponent::CloseIfMenuOpen() {
}



bool UPauseHUDComponent::CanInvitePlayers() const {
    return false;
}

void UPauseHUDComponent::CalculateIsKnightTrial(UObject* WorldContextObject) {
}


