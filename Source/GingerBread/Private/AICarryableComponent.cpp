#include "AICarryableComponent.h"

UAICarryableComponent::UAICarryableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Damage = 0.00f;
}

void UAICarryableComponent::OnHit(AActor* OtherActor) {
}


