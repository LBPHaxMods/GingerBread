#include "TargetableComponent.h"

UTargetableComponent::UTargetableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationRange = 100.00f;
    this->MinActivationRange = 0.00f;
    this->SeparateUpAndSurfaceActivationRange = false;
    this->UpActivationRange = 0.00f;
    this->LookAtAngleTolerance = 90.00f;
    this->LookAtAngleToleranceVertical = 90.00f;
    this->RestrictTargetableAngle = false;
    this->TargetableAngleLimit = 0.00f;
    this->TargetWeight = 1.00f;
    this->bIsTargettable = true;
    this->TargetType = ETargetType::Point;
    this->Radius = 10.00f;
    this->Length = 10.00f;
    this->DrawDebug = false;
}

void UTargetableComponent::SetTargetWeight(float target_weight) {
}

void UTargetableComponent::SetTargetType(ETargetType target_type) {
}

void UTargetableComponent::SetTargetableAngleLimit(float angle_tolerance) {
}

void UTargetableComponent::SetRestrictTargetableAngle(bool restrict_targetable_angle) {
}

void UTargetableComponent::SetRadius(float NewRadius) {
}

void UTargetableComponent::SetMinActivationRange(const float Range) {
}

void UTargetableComponent::SetLength(float NewLength) {
}

void UTargetableComponent::SetIsTargettable(const bool isTargettable) {
}

void UTargetableComponent::SetExtents(const FVector& NewExtents) {
}

void UTargetableComponent::SetAngleToleranceVertical(float angle_tolerance) {
}

void UTargetableComponent::SetAngleToleranceHorizontal(float angle_tolerance) {
}

void UTargetableComponent::SetActivationRange(float activation_range) {
}


