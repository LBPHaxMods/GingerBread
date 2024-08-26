#include "BallRollingMovementExtender.h"

UBallRollingMovementExtender::UBallRollingMovementExtender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpeedAtMinAngle = 0.00f;
    this->MaxSpeedAtMaxAngle = 0.00f;
    this->MinAngleLimit = 0.00f;
    this->MaxAngleLimit = 0.00f;
    this->MaxTurningAngle = 0.00f;
    this->Acceleration = 0.00f;
    this->Deceleration = 0.00f;
    this->DirectionalMemoryCount = 5;
    this->DirectionalMemoryDistance = 1.50f;
}

void UBallRollingMovementExtender::PhysWalking(float DeltaTime) {
}

void UBallRollingMovementExtender::PhysicsRotation(float DeltaTime) {
}

void UBallRollingMovementExtender::LockMovement(bool SpeedLock, bool RotationLock) {
}

FRotator UBallRollingMovementExtender::GetDesiredRotation() {
    return FRotator{};
}

FVector UBallRollingMovementExtender::GetCachedVelocity() {
    return FVector{};
}


