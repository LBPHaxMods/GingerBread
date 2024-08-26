#include "ProogleLaunchComponent.h"

UProogleLaunchComponent::UProogleLaunchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AimHopArc = 0.33f;
    this->HopToAimDistance = 11.00f;
    this->OffsetFromDestination = 2.00f;
    this->PredictAheadTime = 0.23f;
    this->MaxAngleDeviation = 25.00f;
    this->LaunchArc = 0.50f;
    this->LaunchDecisionRange = 20.00f;
    this->MaxJumpRange = 60.00f;
    this->MinimumJumpDistance = 10.00f;
    this->LaunchMaxHeight = 24.00f;
    this->BounceAngle = 0.00f;
    this->BounceImpulseStrength = 0.00f;
}

bool UProogleLaunchComponent::GetLaunchLocation(EProogleLaunchType LaunchType, const FVector& StartLocation, AActor* TargetActor, const FVector& FacingDirection, FVector& OutLaunchLocation) {
    return false;
}


