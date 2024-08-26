#include "FloaterComponent.h"

UFloaterComponent::UFloaterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicsComp = NULL;
    this->OccilationDelta = 2.00f;
    this->OccilationSpeed = 4.00f;
    this->OccilationOffset = 0.00f;
    this->RestLength = 50.00f;
    this->SuspentionSpringStrength = 45.00f;
    this->DampingStrength = 350.00f;
}


