#include "ProogleCantAttackComponent.h"

UProogleCantAttackComponent::UProogleCantAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftTurnAction = TEXT("TurnOnSpotLeft");
    this->RightTurnAction = TEXT("TurnOnSpotRight");
    this->PreTurnPostAnimDelay = 0.13f;
    this->TurnAnimDelay = 0.30f;
    this->TurnSpeed = 360.00f;
    this->PredictAheadSeconds = 0.50f;
    this->MinAngleForTurn = 40.00f;
}


