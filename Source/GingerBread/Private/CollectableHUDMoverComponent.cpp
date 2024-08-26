#include "CollectableHUDMoverComponent.h"

UCollectableHUDMoverComponent::UCollectableHUDMoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollectableStaticMesh = NULL;
    this->hudTargetMesh = NULL;
    this->TimeCurve = NULL;
    this->ScaleCurve = NULL;
    this->WorldScaleOnComplete = 0.00f;
    this->CollectableLooksAddedToHUD = 0.98f;
}

void UCollectableHUDMoverComponent::SetupComponent(UMeshComponent* NewHudTargetMesh, UStaticMeshComponent* NewCollectableStaticMesh, FName NewSocketName, ASackboy* localSackboy) {
}

void UCollectableHUDMoverComponent::SetScreenCoords(const FVector2D& screenCoords) {
}

void UCollectableHUDMoverComponent::SetInitialVelocity(const FVector& NewInitialVelocity) {
}


