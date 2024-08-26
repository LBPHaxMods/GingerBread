#include "HoudiniHandleComponent.h"

UHoudiniHandleComponent::UHoudiniHandleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HandleType = EHoudiniHandleType::Xform;
}


