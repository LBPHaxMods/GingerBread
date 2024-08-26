#include "SniperTurnComponent.h"

USniperTurnComponent::USniperTurnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftTurnAction = TEXT("TurnLeft");
    this->RightTurnAction = TEXT("TurnRight");
    this->LeftTurnAdditiveAction = TEXT("TurnLeftAdditive");
    this->RightTurnAdditiveAction = TEXT("TurnRightAdditive");
    this->MinAngleForTurn = 40.00f;
    this->PredictAheadSeconds = 0.50f;
    this->PostAnimPreTurnDelay = 0.05f;
    this->TurnAnimDelay = 0.35f;
    this->TurnSpeed = 270.00f;
}


