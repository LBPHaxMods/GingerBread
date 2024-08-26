#include "AIMegaSlapReactionComponent.h"

UAIMegaSlapReactionComponent::UAIMegaSlapReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementSpeed = 0.00f;
    this->RotationSpeed = 0.00f;
    this->Acceleration = 0.00f;
}

void UAIMegaSlapReactionComponent::Stop() {
}

bool UAIMegaSlapReactionComponent::Start(ASackboy* _sackboy) {
    return false;
}


