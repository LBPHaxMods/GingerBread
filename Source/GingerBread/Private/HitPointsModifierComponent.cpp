#include "HitPointsModifierComponent.h"

UHitPointsModifierComponent::UHitPointsModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetAddressable = true;
    this->bAutoActivate = true;
    this->AutoAssignColliders = true;
    this->AutoDisableColliders = false;
}

void UHitPointsModifierComponent::UnregisterInteractionCollider(UInteractionComponent* Collider) {
}

void UHitPointsModifierComponent::UnregisterCollider(UPrimitiveComponent* Collider) {
}

void UHitPointsModifierComponent::SetTableEntry(const FDataTableRowHandle& Entry) {
}

void UHitPointsModifierComponent::SetModifierEnabled(bool Enabled) {
}

void UHitPointsModifierComponent::RemoveFromIgnoreActors(AActor* ignoreThis) {
}

void UHitPointsModifierComponent::RemoveAllIgnoreActors() {
}

void UHitPointsModifierComponent::RegisterInteractionCollider(UInteractionComponent* Collider) {
}

void UHitPointsModifierComponent::RegisterCollider(UPrimitiveComponent* Collider) {
}

FHitPointsModifierTableRow UHitPointsModifierComponent::GetTableEntryRef() const {
    return FHitPointsModifierTableRow{};
}

void UHitPointsModifierComponent::AddToIgnoreActors(AActor* ignoreThis) {
}


