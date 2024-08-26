#include "AIAvoidanceSpeedLimiterComponent.h"

UAIAvoidanceSpeedLimiterComponent::UAIAvoidanceSpeedLimiterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAIAvoidanceSpeedLimiterComponent::UnregisterCollider() {
}

void UAIAvoidanceSpeedLimiterComponent::SetInterpSpeed(float NewSpeed) {
}

void UAIAvoidanceSpeedLimiterComponent::SetDeltaLimit(float newDelta) {
}

void UAIAvoidanceSpeedLimiterComponent::RegisterInteractionCollider(UInteractionComponent* colliderToRegister) {
}

void UAIAvoidanceSpeedLimiterComponent::RegisterCollider(USphereComponent* colliderToRegister) {
}

void UAIAvoidanceSpeedLimiterComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAIAvoidanceSpeedLimiterComponent::OnOverlapBegin(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UAIAvoidanceSpeedLimiterComponent::OnInteractEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void UAIAvoidanceSpeedLimiterComponent::OnInteractBegin(UInteractionComponent* targetPrim, AActor* SourceActor, UInteractionComponent* sourcePrim) {
}


