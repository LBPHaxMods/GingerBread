#include "LaunchDemoHudComponent.h"

ULaunchDemoHudComponent::ULaunchDemoHudComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ULaunchDemoHudComponent::UnbindPlayerChanges() {
}

void ULaunchDemoHudComponent::RequestSlotQuit(EPlayerSlot PlayerSlot) {
}

void ULaunchDemoHudComponent::RefreshPlayers() {
}


void ULaunchDemoHudComponent::OnPlayerSelectStateChanged_Implementation(EPlayerSlot PlayerSlot, EDemoScreenPlayerState OldState, EDemoScreenPlayerState NewState) {
}

void ULaunchDemoHudComponent::OnPlayerReadyToJoinEvent(EPlayerReadyToJoinStatus Status, const FGingerbreadPlayerId& player_id) {
}

void ULaunchDemoHudComponent::OnJoinedPlayerCountChanged(int32 Count) {
}


EDemoScreenPlayerState ULaunchDemoHudComponent::GetPlayerState(EPlayerSlot PlayerSlot) const {
    return EDemoScreenPlayerState::Invalid;
}

void ULaunchDemoHudComponent::ChangePlayerState(EPlayerSlot PlayerSlot, EDemoScreenPlayerState NewState) {
}

void ULaunchDemoHudComponent::BindPlayerChanges() {
}

bool ULaunchDemoHudComponent::AreAllPlayersReady() const {
    return false;
}


