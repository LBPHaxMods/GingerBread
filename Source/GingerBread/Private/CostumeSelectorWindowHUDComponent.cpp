#include "CostumeSelectorWindowHUDComponent.h"

UCostumeSelectorWindowHUDComponent::UCostumeSelectorWindowHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentState = EUICostumeSelectState::SelectingCostume;
}



void UCostumeSelectorWindowHUDComponent::SelectPressed() {
}

void UCostumeSelectorWindowHUDComponent::RightPressed(const FName CostumeNameID, bool IsHanger) {
}

void UCostumeSelectorWindowHUDComponent::ResetSelector_Implementation() {
}

void UCostumeSelectorWindowHUDComponent::OnNotificationResult(int32 iresult) {
}

void UCostumeSelectorWindowHUDComponent::OnExitCostumeState_Implementation(EUICostumeSelectState OldState) {
}

void UCostumeSelectorWindowHUDComponent::OnEnterCostumeState_Implementation(EUICostumeSelectState NewState) {
}

void UCostumeSelectorWindowHUDComponent::OnCostumePartNoPermission(const FGingerbreadPlayerId& PlayerId, int32 HangerID, const FName& costumeName) {
}

void UCostumeSelectorWindowHUDComponent::LeftPressed(const FName CostumeNameID, bool IsHanger) {
}

bool UCostumeSelectorWindowHUDComponent::IsCostumeSelectorEnable() const {
    return false;
}

FGingerbreadPlayerId UCostumeSelectorWindowHUDComponent::GetControllingPlayerId() {
    return FGingerbreadPlayerId{};
}

void UCostumeSelectorWindowHUDComponent::EnableCostumeSelector(bool Enable) {
}


void UCostumeSelectorWindowHUDComponent::BackPressed() {
}

void UCostumeSelectorWindowHUDComponent::AssignCostume(const FName CostumeNameID, bool IsHanger) {
}


