#include "ProogleSuperAnticipateComponent.h"

UProogleSuperAnticipateComponent::UProogleSuperAnticipateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostAnimPreMoveDelay = 0.45f;
    this->AnticipationAnim = TEXT("SuperAttackJump");
    this->RemainingDelay = 0.60f;
    this->jumpDistance = 0.00f;
    this->TurnSpeed = 500.00f;
    this->PredictAheadSeconds = 0.50f;
}


