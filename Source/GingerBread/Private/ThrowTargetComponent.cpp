#include "ThrowTargetComponent.h"

UThrowTargetComponent::UThrowTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("ThrowTarget");
    this->ThrowPitch = 60.00f;
}


