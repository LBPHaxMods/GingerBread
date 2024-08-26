#include "RideOnPathFollowerComponent.h"

URideOnPathFollowerComponent::URideOnPathFollowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Distance = 0.00f;
    this->PathActor = NULL;
    this->Path = NULL;
    this->splineIndex = 0;
}

void URideOnPathFollowerComponent::SetTangentOffset(const FVector& Offset) {
}

void URideOnPathFollowerComponent::RESET() {
}

void URideOnPathFollowerComponent::Move(float Delta, bool broadcast_events) {
}

void URideOnPathFollowerComponent::GetTransform(FTransformData& Transform) {
}


