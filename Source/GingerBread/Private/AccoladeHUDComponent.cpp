#include "AccoladeHUDComponent.h"

UAccoladeHUDComponent::UAccoladeHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UI_Visible = false;
}


void UAccoladeHUDComponent::OnMatchStatusChanged(EGingerbreadMatchStatus eMatchStatus) {
}

void UAccoladeHUDComponent::OnGameStateValid(AActor* GameStateActor) {
}

void UAccoladeHUDComponent::OnButtonPressed() {
}



