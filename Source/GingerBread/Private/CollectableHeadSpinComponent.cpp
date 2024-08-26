#include "CollectableHeadSpinComponent.h"

UCollectableHeadSpinComponent::UCollectableHeadSpinComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollectableStaticMesh = NULL;
    this->Sackboy = NULL;
    this->AlphaFinishTime = 1.00f;
    this->ScaleAlpha = NULL;
    this->TransitionAlpha = NULL;
    this->SpinRotation = NULL;
}

void UCollectableHeadSpinComponent::BeginAnimation() {
}


