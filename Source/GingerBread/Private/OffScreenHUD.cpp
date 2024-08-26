#include "OffScreenHUD.h"

UOffScreenHUD::UOffScreenHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PaddingPercentage = 0.00f;
}


void UOffScreenHUD::OnAppearanceManagerSync(AActor* GameStateActor) {
}

void UOffScreenHUD::OnAppearanceManagerReady() {
}


