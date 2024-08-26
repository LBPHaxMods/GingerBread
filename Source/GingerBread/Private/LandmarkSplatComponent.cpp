#include "LandmarkSplatComponent.h"

ULandmarkSplatComponent::ULandmarkSplatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("LandmarkSplat");
    this->EventScale = 1.00f;
    this->SplatBrushOverride = NULL;
}


