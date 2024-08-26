#include "ProogleAlertTurnToComponent.h"

UProogleAlertTurnToComponent::UProogleAlertTurnToComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PredictAheadSeconds = 0.20f;
    this->FinishTurnTolerance = 5.00f;
    this->TurnSpeed = 630.00f;
    this->AnimDuration = 0.50f;
}


