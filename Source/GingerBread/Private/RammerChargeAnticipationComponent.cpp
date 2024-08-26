#include "RammerChargeAnticipationComponent.h"

URammerChargeAnticipationComponent::URammerChargeAnticipationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostAnimPreMoveDelay = 0.30f;
    this->AnticipationAnim = TEXT("ChargeAnticipation");
    this->RemainingDelay = 0.40f;
    this->jumpDistance = -15.00f;
    this->TurnSpeed = 500.00f;
    this->PredictAheadSeconds = 0.20f;
}


