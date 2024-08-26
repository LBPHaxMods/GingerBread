#include "PhysicsCollectableComponent.h"

UPhysicsCollectableComponent::UPhysicsCollectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartsAwake = false;
    this->CacheImpulses = false;
}

void UPhysicsCollectableComponent::SetLinearVelocity(const FVector& Velocity, bool AddToCurrent) {
}

void UPhysicsCollectableComponent::OnGlueDetached(UGlueCollectableComponent* pGlueCollectableComponent) {
}

void UPhysicsCollectableComponent::ApplyImpulse(const FVector& Impulse) {
}

void UPhysicsCollectableComponent::ApplyCachedImpulse() {
}

void UPhysicsCollectableComponent::ApplyAngularImpulse(const FVector& ImpulseInRadians) {
}


