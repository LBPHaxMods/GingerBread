#include "ArcComponent.h"

UArcComponent::UArcComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->TargetActor = NULL;
    this->UpdateArcParametersWhenMoved = false;
}

void UArcComponent::SetTargetLocation(const FVector& WorldTargetLocation) {
}

void UArcComponent::SetTargetActor(AActor* NewTargetActor) {
}

void UArcComponent::LaunchPrimitiveComponent(UPrimitiveComponent* ComponentToLaunch, const bool bDisableAirDrag) {
}

void UArcComponent::LaunchActor(AActor* ActorToLaunch, const bool bDisableAirDrag, const bool bDisableActions) {
}

FVector UArcComponent::GetVelocityAtTime(const float Time) const {
    return FVector{};
}

FVector UArcComponent::GetPositionAtTime(const float Time) const {
    return FVector{};
}

FVector UArcComponent::GetInitialVelocity() const {
    return FVector{};
}

FVector UArcComponent::GetInitialLocation() const {
    return FVector{};
}

FVector UArcComponent::GetFinalLocation() const {
    return FVector{};
}

float UArcComponent::GetApexTime() const {
    return 0.0f;
}


