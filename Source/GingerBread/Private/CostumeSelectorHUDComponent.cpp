#include "CostumeSelectorHUDComponent.h"

UCostumeSelectorHUDComponent::UCostumeSelectorHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThumbnailOffset = 0.00f;
    this->CurrentCostume = NULL;
    this->NextCostume = NULL;
    this->EmptyWidgetIndex = 0;
    this->HiddenWidgetIndex = 0;
}

void UCostumeSelectorHUDComponent::SelectPressed() {
}

void UCostumeSelectorHUDComponent::EnableCostumeSelector(bool Enable) {
}


