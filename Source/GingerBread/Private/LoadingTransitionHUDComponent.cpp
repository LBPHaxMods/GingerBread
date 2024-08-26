#include "LoadingTransitionHUDComponent.h"

ULoadingTransitionHUDComponent::ULoadingTransitionHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WantRetry = false;
    this->disableLevelIntroSequence = false;
    this->InSummaryScreen = false;
    this->InBonusLevel = false;
    this->ExitingSummaryScreen = false;
    this->mpMyLoadingWidget = NULL;
}

void ULoadingTransitionHUDComponent::StopTransition_Implementation() {
}


void ULoadingTransitionHUDComponent::ShowRestartHUD_Implementation() {
}

void ULoadingTransitionHUDComponent::ShowLoadingScreenInstantly_Implementation() {
}

void ULoadingTransitionHUDComponent::ShowContinueHUD_Implementation() {
}

void ULoadingTransitionHUDComponent::SetPersistentLoadingScreenState(const FLoadingPersistentState& NewState) {
}

void ULoadingTransitionHUDComponent::SetOverlayObjectsVisibleOnLoad(bool visible) {
}

void ULoadingTransitionHUDComponent::SetLoadingSpinnerShown(bool Shown) {
}

void ULoadingTransitionHUDComponent::SetJoiningNetworkTextShown(bool Shown) {
}

void ULoadingTransitionHUDComponent::ProcessClientStartTransition() {
}

void ULoadingTransitionHUDComponent::ProcessClientStartSummary() {
}

void ULoadingTransitionHUDComponent::PrepareToRetry() {
}

void ULoadingTransitionHUDComponent::PrepareToLoadLevel(const FString& level_name, const FString& spawn_point_name, bool disable_level_intro_sequence, ELoadingType loadType) {
}

void ULoadingTransitionHUDComponent::PrepareMapReturn() {
}

void ULoadingTransitionHUDComponent::OnTransitionComplete() {
}

void ULoadingTransitionHUDComponent::OnPreClientTravel(const FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel) {
}



bool ULoadingTransitionHUDComponent::IsJoiningGame() const {
    return false;
}

bool ULoadingTransitionHUDComponent::IsClientReady() const {
    return false;
}

bool ULoadingTransitionHUDComponent::HasTransitioned() const {
    return false;
}

FLoadingPersistentState ULoadingTransitionHUDComponent::GetPersistentLoadingScreenState() {
    return FLoadingPersistentState{};
}

bool ULoadingTransitionHUDComponent::GetOverlayObjectsVisibleOnLoad() const {
    return false;
}

ELoadingType ULoadingTransitionHUDComponent::GetLoadingType() const {
    return ELoadingType::Default;
}

ULoadingTransitionHUDComponent* ULoadingTransitionHUDComponent::GetLoadingTransitionHUD(const UObject* WorldContextObject) {
    return NULL;
}

bool ULoadingTransitionHUDComponent::GetLoadingSpinnerShown() {
    return false;
}

bool ULoadingTransitionHUDComponent::GetLevelLoadingState(const FString& MapName, FLoadingScreenState& LevelLoadingState) {
    return false;
}

bool ULoadingTransitionHUDComponent::GetJoiningNetworkTextShown() {
    return false;
}

void ULoadingTransitionHUDComponent::EnableRestartHUD(bool Retry) {
}


void ULoadingTransitionHUDComponent::ClientStartLoadingTransition(const FString& level_name, ELoadingType loadType) {
}

void ULoadingTransitionHUDComponent::ClientShowSummaryScreen() {
}


