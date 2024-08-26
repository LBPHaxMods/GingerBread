#include "RollingMovementComponent.h"
#include "Net/UnrealNetwork.h"

URollingMovementComponent::URollingMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Speed = 50.00f;
    this->HorizontalVelocityBleed = 0.90f;
    this->MaxFallVelocity = -200.00f;
    this->GroundTraceRadius = 3.00f;
    this->bAllowDeviation = false;
    this->bShouldOrientToVelocity = false;
}

bool URollingMovementComponent::IsGrounded() const {
    return false;
}

void URollingMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URollingMovementComponent, Speed);
}


