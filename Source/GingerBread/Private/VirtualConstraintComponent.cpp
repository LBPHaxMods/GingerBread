#include "VirtualConstraintComponent.h"

UVirtualConstraintComponent::UVirtualConstraintComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZeroLinearVelocityOnImpact = false;
    this->ZeroAngularVelocityOnImpact = false;
    this->ApplyWeightToSupport = true;
    this->OffsetAlongSupportNormal = 0.10f;
    this->ExtraRayLength = 2.50f;
    this->RayStepUp = 1.00f;
    this->AngleChangeTollerance = 0.01f;
    this->DepthChangeTollerance = 0.00f;
    this->CollisionProfile = TEXT("SackboyRayChecks");
    this->GenerateHitEvents = false;
    this->HandleSlopes = true;
    this->DebugDrawRays = false;
    this->DebugDrawSupport = false;
}


