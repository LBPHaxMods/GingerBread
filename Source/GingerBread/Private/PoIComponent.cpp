#include "PoIComponent.h"

UPoIComponent::UPoIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationRadius = 48.00f;
    this->EnableVisibilityChecks = true;
    this->bActivateOnBegin = true;
    this->bMovable = false;
    this->bUseLineOfSightCheck = false;
}

AActor* UPoIComponent::SpawnPOI(UObject* WorldContextObject, UClass* SpawnObj, const FVector& Location, const FRotator& Rotation) {
    return NULL;
}

void UPoIComponent::SetTag(const FName& poiTag) {
}

void UPoIComponent::SetPOIActive(bool Flag) {
}

bool UPoIComponent::IsPOIActive() const {
    return false;
}

float UPoIComponent::Importance() const {
    return 0.0f;
}

FName UPoIComponent::GetTag() const {
    return NAME_None;
}

bool UPoIComponent::CompareTag(const FName& compTag) const {
    return false;
}


