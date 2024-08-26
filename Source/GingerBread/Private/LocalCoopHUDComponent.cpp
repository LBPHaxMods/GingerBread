#include "LocalCoopHUDComponent.h"

ULocalCoopHUDComponent::ULocalCoopHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TicksWhenPaused = true;
    this->IsGameLoaded = false;
    this->IsAnimating = false;
    this->ControllerConnectedDisplayTime = 15.00f;
    this->LevelWorldDisplayTime = 3.00f;
    this->ControllerConnected = false;
}




void ULocalCoopHUDComponent::RequestShow() {
}

void ULocalCoopHUDComponent::RefreshPlayers() {
}


void ULocalCoopHUDComponent::OnShowAnimationFinished_Implementation() {
}

void ULocalCoopHUDComponent::OnScreenChanged(UGingerbreadScreen* screenPushed) {
}

void ULocalCoopHUDComponent::OnSackboySpawned(ASackboy* Sackboy) {
}

void ULocalCoopHUDComponent::OnPlayerReadyToJoinEvent(EPlayerReadyToJoinStatus Status, const FGingerbreadPlayerId& player_id) {
}

void ULocalCoopHUDComponent::OnPlayerLeftLevel(AGingerbreadPlayerController* Controller) {
}

void ULocalCoopHUDComponent::OnJoinedPlayersChangedInLevel(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& ID, bool forced) {
}

void ULocalCoopHUDComponent::OnHideAnimationFinished_Implementation() {
}




void ULocalCoopHUDComponent::ForceHide_Implementation() {
}


