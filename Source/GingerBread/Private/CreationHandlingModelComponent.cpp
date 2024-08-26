#include "CreationHandlingModelComponent.h"
#include "Templates/SubclassOf.h"

UCreationHandlingModelComponent::UCreationHandlingModelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsHandlingEnabled = false;
    this->CurrentHandlingConfig = NULL;
    this->IsGrounded = false;
}

void UCreationHandlingModelComponent::SetHandlingModel(TSubclassOf<UCreationHandlingConfig> Config) {
}

void UCreationHandlingModelComponent::SetHandlingEnabled(bool bEnable) {
}



void UCreationHandlingModelComponent::CacheWheels() {
}

void UCreationHandlingModelComponent::Brake(float ForceNewtons, const TArray<UWheelComponent*>& Wheels) {
}

void UCreationHandlingModelComponent::Accelerate(float ForceNewtons, const TArray<UWheelComponent*>& Wheels) {
}


