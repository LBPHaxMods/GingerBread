#include "PopshotShootProjectileComponent.h"

UPopshotShootProjectileComponent::UPopshotShootProjectileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialProjectileRotationRate = 0.00f;
}

void UPopshotShootProjectileComponent::UnregisterProjectile() {
}

void UPopshotShootProjectileComponent::OnProjectileDestroyed(AActor* Projectile) {
}


