#include "PopshotTurnToTargetComponent.h"

UPopshotTurnToTargetComponent::UPopshotTurnToTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreTurnPostAnimDelay = 0.00f;
    this->TurnAnimDelay = 0.00f;
    this->TurnSpeed = 0.00f;
    this->PredictAheadSeconds = 0.00f;
    this->FinishTurnTolerance = 0.00f;
    this->MinAngleForTurn = 0.00f;
}

