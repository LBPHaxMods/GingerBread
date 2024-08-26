#include "JumpPositioningComponent.h"

UJumpPositioningComponent::UJumpPositioningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JumpLocationSafeDistance = 7.75f;
    this->bDebug = false;
    this->JumpArcParam = 0.50f;
    this->PreJumpDelay = 0.50f;
    this->TurnDelay = 0.50f;
    this->AboutToLandTime = 0.20f;
    this->MaximumJumpTime = 5.00f;
    this->RotationSpeed = 270.00f;
    this->InitialAcceptanceRadius = 100.00f;
}

void UJumpPositioningComponent::GetValidJumpPositionAndRotation(FVector& out_position, FRotator& out_rotation) {
}


