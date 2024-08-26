#include "SMHairComponent.h"

USMHairComponent::USMHairComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSimulateHairPhysics = true;
    this->bDrawDebugStrands = false;
    this->DrawDebugStrandLineThickness = 0.01f;
}

void USMHairComponent::SetHairAsset(USumoHair* HairAsset, int32 Index) {
}

void USMHairComponent::Initialise() {
}


