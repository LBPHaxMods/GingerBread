#include "GingerbreadPathFollowingComponent.h"

UGingerbreadPathFollowingComponent::UGingerbreadPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterMoveComp = NULL;
    this->SegmentAcceptanceRadius = 0.00f;
}

void UGingerbreadPathFollowingComponent::SetPreciseReachCheckThreshold(float AgentHalfHeightMultiplier) {
}


