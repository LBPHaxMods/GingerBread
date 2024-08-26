#include "KingFroogleHitReactionComponent.h"

UKingFroogleHitReactionComponent::UKingFroogleHitReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveDuration = 0.50f;
    this->MoveSpeed = 0.00f;
    this->RotationSpeed = 0.00f;
    this->TotalDurationNormal = 0.80f;
    this->TotalDurationAlternate = 0.60f;
}


