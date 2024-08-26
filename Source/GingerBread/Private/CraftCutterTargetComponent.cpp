#include "CraftCutterTargetComponent.h"

UCraftCutterTargetComponent::UCraftCutterTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("CraftCutterTarget");
    this->BounceOnInteraction = false;
}


