#include "DriveComponent.h"

UDriveComponent::UDriveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bBasicLerp = true;
    this->BasicLerpRatio = 0.20f;
    this->LinearStrength = 100.00f;
    this->LinearDamping = 60.00f;
    this->AngularStrength = 100.00f;
    this->AngularDamping = 60.00f;
}

void UDriveComponent::SnapToTarget() {
}

void UDriveComponent::SetTarget(const FVector& NewPosition, const FRotator& NewRotation) {
}


