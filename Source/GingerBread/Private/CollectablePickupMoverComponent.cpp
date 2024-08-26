#include "CollectablePickupMoverComponent.h"

UCollectablePickupMoverComponent::UCollectablePickupMoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberOfRotations = -1.00f;
    this->ScaleAlpha = NULL;
    this->AngularVelocity = NULL;
    this->RadiusAlpha = NULL;
    this->HeightAlpha = NULL;
    this->TransitionAlpha = NULL;
    this->RotationAlpha = NULL;
}

void UCollectablePickupMoverComponent::SetupComponent(USceneComponent* componentToRotate, UStaticMeshComponent* StaticMesh, ASackboy* localSackboy) {
}


