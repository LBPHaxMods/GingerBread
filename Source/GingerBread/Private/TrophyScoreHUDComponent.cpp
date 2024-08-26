#include "TrophyScoreHUDComponent.h"

UTrophyScoreHUDComponent::UTrophyScoreHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrophyActor = NULL;
    this->IsTrophySystemEnabled = false;
}

void UTrophyScoreHUDComponent::Show(bool visible, bool animate) {
}

void UTrophyScoreHUDComponent::OnCoolSystemAvailable(AActor* ManagerActor) {
}

void UTrophyScoreHUDComponent::EnableTrophyHud(bool PlayIntroAnim) {
}

void UTrophyScoreHUDComponent::DisableTrophyHud(bool PlayShowOutro) {
}


