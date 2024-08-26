#include "AttackFlashComponent.h"

UAttackFlashComponent::UAttackFlashComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackFlashEnabled = false;
    this->AttackFlashCurve = NULL;
}

void UAttackFlashComponent::TriggerAttackFlash_Implementation() {
}

void UAttackFlashComponent::EndAttackFlash_Implementation() {
}

void UAttackFlashComponent::CreateDynamicMaterialsForMesh(UMeshComponent* Mesh) {
}


