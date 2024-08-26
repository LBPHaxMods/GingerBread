#include "AIHitFlashComponent.h"

UAIHitFlashComponent::UAIHitFlashComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitFlashCurve = NULL;
}

void UAIHitFlashComponent::CreateDynamicMaterialsForMesh(UMeshComponent* Mesh) {
}


