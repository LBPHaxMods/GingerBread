#include "AIDetectorComponent.h"

UAIDetectorComponent::UAIDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AlwaysInDistance = false;
    this->AlwaysInFront = false;
    this->SixthSenseRange = 0.00f;
    this->DistanceDivisorHeuristic = 3.00f;
    this->PreferTargetsUpAhead = true;
}

void UAIDetectorComponent::SetSecondaryTargets(TArray<AActor*> detectionTargets) {
}

void UAIDetectorComponent::SetPrimaryTargets(TArray<AActor*> detectionTargets) {
}

void UAIDetectorComponent::SetMainSecondaryTarget(AActor* primaryDetectionTarget) {
}

void UAIDetectorComponent::SetMainPrimaryTarget(AActor* primaryDetectionTarget) {
}


TArray<AActor*> UAIDetectorComponent::GetSecondaryTargets() const {
    return TArray<AActor*>();
}

TArray<AActor*> UAIDetectorComponent::GetPrimaryTargets() const {
    return TArray<AActor*>();
}

AActor* UAIDetectorComponent::GetMainSecondaryTarget() {
    return NULL;
}

AActor* UAIDetectorComponent::GetMainPrimaryTarget() {
    return NULL;
}

void UAIDetectorComponent::ClearSecondaryTargets() {
}

void UAIDetectorComponent::ClearPrimaryTargets() {
}

void UAIDetectorComponent::AddSecondaryTarget(AActor* detectionTarget) {
}

void UAIDetectorComponent::AddPrimaryTarget(AActor* detectionTarget) {
}


