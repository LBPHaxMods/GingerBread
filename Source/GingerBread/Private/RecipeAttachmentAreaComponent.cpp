#include "RecipeAttachmentAreaComponent.h"

URecipeAttachmentAreaComponent::URecipeAttachmentAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bCastDynamicShadow = false;
    this->HighlightedVisualPrimitive = NULL;
    this->ToleranceCm = 1.75f;
    this->bIsHighlighted = false;
    this->bIsAttachPoint = false;
}



