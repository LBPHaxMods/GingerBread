#include "CreationBaseComponent.h"

UCreationBaseComponent::UCreationBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SatisfiedRecipe = NULL;
    this->bIsWeldAttachAllowed = true;
    this->bIsCreationEnabled = false;
    this->MeshAnimationTimeSeconds = 0.00f;
    this->MeshAnimationDurationSeconds = 3.00f;
    this->ChassisType = Unassigned;
}

void UCreationBaseComponent::SyncVehiclePosition(AActor* Vehicle) {
}

void UCreationBaseComponent::SyncToVehiclePosition(AActor* Vehicle) {
}

bool UCreationBaseComponent::IsValidVehicle(AActor* Vehicle) {
    return false;
}

bool UCreationBaseComponent::IsMeshTransforming() const {
    return false;
}

bool UCreationBaseComponent::IsAnyRecipeSatisfied() const {
    return false;
}

void UCreationBaseComponent::CopyMaterials(TEnumAsByte<EPropagateDirection> PropagateDirection) {
}

void UCreationBaseComponent::CalculateLocalTargetPositions(AActor* Vehicle) {
}


