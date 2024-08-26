#include "SackboyCarryComponent.h"

USackboyCarryComponent::USackboyCarryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxCollisionDistance = 10.00f;
    this->MaxVelocityOffset = 40.00f;
    this->RotationBlendRate = 0.25f;
    this->ResolveAlongLocalHorizontalAxes = true;
}

void USackboyCarryComponent::StopCarryingObject() {
}

void USackboyCarryComponent::StartCarryingObject(UPrimitiveComponent* Primitive) {
}

void USackboyCarryComponent::SetSackboy(ASackboy* Sackboy) {
}

void USackboyCarryComponent::SetCarryingPrimitive(UPrimitiveComponent* Primitive) {
}

bool USackboyCarryComponent::IsCarryingObject() {
    return false;
}

UPrimitiveComponent* USackboyCarryComponent::GetCarriedObject() {
    return NULL;
}


