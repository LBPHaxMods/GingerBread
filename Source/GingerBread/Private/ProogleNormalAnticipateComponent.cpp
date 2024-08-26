#include "ProogleNormalAnticipateComponent.h"

UProogleNormalAnticipateComponent::UProogleNormalAnticipateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostAnimPreMoveDelay = 0.30f;
    this->AnticipationAnim = TEXT("AnticipateAnim");
    this->RemainingDelay = 1.00f;
    this->jumpDistance = -22.00f;
    this->JumpArc = 0.40f;
    this->JumpMinimumAcceptableUnitInterval = 0.75f;
    this->TurnSpeed = 360.00f;
    this->PredictAheadSeconds = 0.10f;
    this->wallNudgeAmount = 10.00f;
}


