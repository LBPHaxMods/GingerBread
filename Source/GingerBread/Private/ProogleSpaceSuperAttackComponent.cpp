#include "ProogleSpaceSuperAttackComponent.h"

UProogleSpaceSuperAttackComponent::UProogleSpaceSuperAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeToReachTarget = 0.00f;
    this->TimeToReachTargetDeviation = 0.00f;
    this->BrakingDistance = 0.00f;
    this->InitiateAttackRange = 0.00f;
    this->RotationRateWhileJumping = 0.00f;
}


