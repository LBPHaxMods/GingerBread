#include "CostumeSelectScreenHUDComponent.h"

UCostumeSelectScreenHUDComponent::UCostumeSelectScreenHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumPlayers = 0;
    this->CostumeSelectorBPClass = NULL;
    this->ExitCostumeScreenDelay = 0.00f;
    this->LoadIntoLevel = false;
    this->IsEnabled_New = false;
    this->RootWidget = NULL;
}

UCostumeSelectorWindowHUDComponent* UCostumeSelectScreenHUDComponent::UpdateCostumeSelectorWindowComponent(UUserWidget* Layout, UGingerbreadWidget* costumeSelectorWidget) {
    return NULL;
}

void UCostumeSelectScreenHUDComponent::TransitionToLoadingScreen() {
}

void UCostumeSelectScreenHUDComponent::SetFlowInsufficientPlayers() {
}

void UCostumeSelectScreenHUDComponent::SetFlowExiting() {
}

void UCostumeSelectScreenHUDComponent::ResetCurrentSelectorWidgets() {
}

void UCostumeSelectScreenHUDComponent::ResetCostumeSelectors() {
}





void UCostumeSelectScreenHUDComponent::OnPlayerStateLeft(FGingerbreadPlayerId PlayerId, EUICostumeSelectState Leftstate) {
}

void UCostumeSelectScreenHUDComponent::OnPlayerStateEntered(FGingerbreadPlayerId PlayerId, EUICostumeSelectState Enteredstate) {
}

void UCostumeSelectScreenHUDComponent::OnPlayerPressSelect(FGingerbreadPlayerId PlayerId) {
}

void UCostumeSelectScreenHUDComponent::OnPlayerPressBack(FGingerbreadPlayerId PlayerId) {
}

void UCostumeSelectScreenHUDComponent::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void UCostumeSelectScreenHUDComponent::OnPlayerChangeCostume(FGingerbreadPlayerId PlayerId, const FName CostumeNameID, bool IsHanger) {
}

void UCostumeSelectScreenHUDComponent::OnJoinedPlayerCountChanged(int32 Count) {
}

void UCostumeSelectScreenHUDComponent::OnCostumeScreenChanged(FGingerbreadPlayerId PlayerId, uint8 ScreenID) {
}

void UCostumeSelectScreenHUDComponent::OnControllerConnectionChangeEvent(bool bIsConnected, int32 SomeValue, int32 ControllerIndex) {
}

bool UCostumeSelectScreenHUDComponent::IsScreenReady_Implementation() {
    return false;
}

void UCostumeSelectScreenHUDComponent::ExitCostumeSelection() {
}

void UCostumeSelectScreenHUDComponent::EnableCostumeSelectorComponents(bool Enable) {
}




