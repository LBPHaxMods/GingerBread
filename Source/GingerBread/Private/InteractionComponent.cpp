#include "InteractionComponent.h"

UInteractionComponent::UInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionShape = EInteractionCollisionShapeType::None;
    this->mTriggerOnly = false;
    this->SphereRadius = 0.00f;
    this->CapsuleHalfHeight = 0.00f;
    this->CapsuleRadius = 0.00f;
    this->ConeHeight = 0.00f;
    this->ConeTopRadius = 0.00f;
    this->ConeBottomRadius = 0.00f;
    this->ReportAsBlockingHit = false;
    this->UseSweepQuery = false;
    this->IAm_HierarchicalTag = NULL;
    this->mPrimitiveToProxyFor = NULL;
    this->mDebugDrawOverride = false;
    this->mDebugLogActive = false;
    this->mDebugLogOverride = false;
}

void UInteractionComponent::SetSphereRadius(float InSphereRadius) {
}

void UInteractionComponent::SetGenerateOverlapEvents(bool bInGenerateOverlapEvents) {
}

void UInteractionComponent::SetCollisionShape(EInteractionCollisionShapeType NewCollisionShape) {
}

void UInteractionComponent::SetCapsuleParameters(float inCapsuleRadius, float inCapsuleHalfHeight) {
}

void UInteractionComponent::SetBoxExtents(const FVector& inBoxExtents) {
}

void UInteractionComponent::GetOverlappingComponents(TArray<UInteractionComponent*>& OutOverlappingComponents) const {
}

bool UInteractionComponent::GetGenerateOverlapEvents() const {
    return false;
}

EInteractionCollisionShapeType UInteractionComponent::GetCollisionShape() const {
    return EInteractionCollisionShapeType::Sphere;
}
