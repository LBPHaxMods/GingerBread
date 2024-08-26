#include "DebugBarGraphComponent.h"

UDebugBarGraphComponent::UDebugBarGraphComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisplay = true;
    this->Values.AddDefaulted(1);
    this->MaxValue = 1.00f;
    this->bHorizontal = true;
    this->bSigned = false;
}

void UDebugBarGraphComponent::SetValue(float Value) {
}


