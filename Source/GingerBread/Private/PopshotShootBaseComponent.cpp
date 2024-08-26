#include "PopshotShootBaseComponent.h"

UPopshotShootBaseComponent::UPopshotShootBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GravityScale = 0.00f;
    this->ShotArc = 0.00f;
    this->ShootCooldownTime = 0.00f;
    this->PreShootDelay = 0.00f;
    this->PostShootDelay = 0.00f;
}

bool UPopshotShootBaseComponent::SpawnAndShoot(const FVector& AimLocation, FVector& OutShootVelocity) {
    return false;
}

float UPopshotShootBaseComponent::GetScaledGravity() const {
    return 0.0f;
}

bool UPopshotShootBaseComponent::CanShootTarget(AActor* TargetActor) {
    return false;
}


