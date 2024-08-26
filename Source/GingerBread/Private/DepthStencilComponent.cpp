#include "DepthStencilComponent.h"

UDepthStencilComponent::UDepthStencilComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StencilValue = 10;
}

void UDepthStencilComponent::SetStencilValue(int32 NewStencilValue) {
}


