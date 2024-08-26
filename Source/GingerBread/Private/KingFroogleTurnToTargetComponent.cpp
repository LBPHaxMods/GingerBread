#include "KingFroogleTurnToTargetComponent.h"

UKingFroogleTurnToTargetComponent::UKingFroogleTurnToTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreTurnPostAnimDelay = 0.00f;
    this->TurnAnimDelay = 0.00f;
    this->TurnSpeed = 0.00f;
    this->FinishTurnTolerance = 0.00f;
    this->MinAngleForTurnToHop = 0.00f;
    this->MinAngleForAlignToCentre = 0.00f;
}


