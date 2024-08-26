#include "StompySpaceLinkComponent.h"

UStompySpaceLinkComponent::UStompySpaceLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinkInitiateDistance = 50.00f;
    this->LinkBreakDistance = 52.00f;
}

bool UStompySpaceLinkComponent::IsLinkedToSomething() {
    return false;
}

void UStompySpaceLinkComponent::EnableLinking() {
}

void UStompySpaceLinkComponent::DisableLinking(bool isImmediate) {
}


