#include "HoppingMovementExtender.h"

UHoppingMovementExtender::UHoppingMovementExtender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalWaitTime = 0.00f;
    this->PrepareToHopTime = 0.00f;
    this->HopArc = 0.33f;
    this->MaxHopMultiplier = 1.25f;
    this->MinHopMultiplier = 0.75f;
    this->RotationSpeed = 5.00f;
}

void UHoppingMovementExtender::UnlockMovement() {
}

void UHoppingMovementExtender::RESET() {
}

void UHoppingMovementExtender::PhysWalking(float DeltaTime) {
}

void UHoppingMovementExtender::PhysFalling(float DeltaTime) {
}

void UHoppingMovementExtender::PhysCustom(float DeltaTime) {
}

void UHoppingMovementExtender::LockMovement() {
}


