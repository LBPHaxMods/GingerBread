#include "AIProjectileMovementComponent.h"

UAIProjectileMovementComponent::UAIProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IgnoreHitEventsFromBehind = false;
    this->BackwardsAngleToIgnore = 90.00f;
}


