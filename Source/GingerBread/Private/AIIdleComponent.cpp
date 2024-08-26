#include "AIIdleComponent.h"

UAIIdleComponent::UAIIdleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PatrolSpeed = 14.00f;
    this->ReturningHomeSpeed = 14.00f;
    this->IdleRotationSpeed = 360.00f;
    this->IdleAcceleration = 200.00f;
}


