#include "DebugHUDComponent.h"

UDebugHUDComponent::UDebugHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelNamesDataTable = NULL;
    this->DebugManager = NULL;
    this->OptionsCreator = NULL;
    this->bDebugMenuVisible = false;
}

void UDebugHUDComponent::ShowDebugHUD(bool Show) {
}

void UDebugHUDComponent::OnVariableRemoved(const FName variablePath) {
}

void UDebugHUDComponent::OnVariableAdded() {
}

void UDebugHUDComponent::OnUpPressed() {
}


void UDebugHUDComponent::OnSelectPressed() {
}

void UDebugHUDComponent::OnRightPressed() {
}

void UDebugHUDComponent::OnPreviousPressed() {
}

void UDebugHUDComponent::OnPageUpPressed() {
}

void UDebugHUDComponent::OnPageDownPressed() {
}

void UDebugHUDComponent::OnNextPressed() {
}

void UDebugHUDComponent::OnLeftPressed() {
}

void UDebugHUDComponent::OnDownPressed() {
}

void UDebugHUDComponent::OnBackPressed() {
}

void UDebugHUDComponent::EnableDebugHUD(bool Enable) {
}





