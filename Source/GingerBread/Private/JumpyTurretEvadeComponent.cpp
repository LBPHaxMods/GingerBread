#include "JumpyTurretEvadeComponent.h"

UJumpyTurretEvadeComponent::UJumpyTurretEvadeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JumpLocationSafeDistance = 7.75f;
    this->bDebug = false;
    this->JumpHeight = 100.00f;
    this->JumpSpeed = 300.00f;
    this->JumpAngle = 0.00f;
    this->HoverTime = 1.00f;
    this->PreJumpDelay = 0.95f;
    this->AboutToLandTime = 0.00f;
    this->MaximumJumpTime = 5.00f;
    this->InitialAcceptanceRadius = 100.00f;
    this->ShadowScaleAtFloorLevel = 1.50f;
    this->ShadowScaleAtMaxHeight = 0.50f;
    this->ShadowScaleCurve = NULL;
}

void UJumpyTurretEvadeComponent::GetValidJumpPositionAndRotation(FVector& out_position, FRotator& out_rotation) {
}


