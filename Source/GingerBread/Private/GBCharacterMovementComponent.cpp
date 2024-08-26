#include "GBCharacterMovementComponent.h"

UGBCharacterMovementComponent::UGBCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseFeetHeightForNavigation = true;
    this->HorizontalJumpSpeedMultiplier = 1.00f;
    this->JumpZMinimum = 25.00f;
    this->GroundRaycheckName = TEXT("AIGroundRayChecks");
    this->WalkStartOffangleLimit = 30.00f;
    this->JumpCurve = NULL;
    this->IsDebugging = false;
    this->PhysWalkingExtraRayDepth = 0.10f;
    this->SupportsAlignToSlope = false;
    this->ForceTurnWalkLimit = 10.00f;
    this->ForceTurnSet = false;
    this->TargetRotationTolerance = 0.50f;
    this->DisableTurnSpeedDampening = false;
    this->CanSlide = false;
    this->SlideDeceleration = 250.00f;
    this->MinSlideSpeed = 30.00f;
    this->SpeedToStopSliding = 0.50f;
    this->FinishedTurn = false;
    this->RayCastDownLength = 2.00f;
}

bool UGBCharacterMovementComponent::SweepForGroundBeneathLocation(const FVector& Location, float SweepDistance, FHitResult& Hit) const {
    return false;
}

void UGBCharacterMovementComponent::SetUseAccelerationForPaths(bool UseAccelerationForPaths) {
}

bool UGBCharacterMovementComponent::Resume() {
    return false;
}

bool UGBCharacterMovementComponent::PredictGrounded(FHitResult& Hit, float PredictAheadTime) {
    return false;
}

bool UGBCharacterMovementComponent::PAUSE() {
    return false;
}

void UGBCharacterMovementComponent::OnJumpInterrupted(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGBCharacterMovementComponent::OnHitSurface(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UGBCharacterMovementComponent::IsSliding() const {
    return false;
}

bool UGBCharacterMovementComponent::IsPaused() {
    return false;
}

bool UGBCharacterMovementComponent::IsGrounded(bool SetSurface) {
    return false;
}

bool UGBCharacterMovementComponent::IsCharacterFallingToDeath() {
    return false;
}

bool UGBCharacterMovementComponent::GetUseAccelerationForPaths() const {
    return false;
}

ANavigationData* UGBCharacterMovementComponent::GetNavData_Blueprint() const {
    return NULL;
}

void UGBCharacterMovementComponent::GB_SetFixedBrakingDistance(float DistanceToEndOfPath) {
}

void UGBCharacterMovementComponent::GB_ClearFixedBrakingDistance() {
}

bool UGBCharacterMovementComponent::CheckGroundedAtLocation(const FVector& Location, FHitResult& Hit) {
    return false;
}


