#include "SniperRunAwayComponent.h"

USniperRunAwayComponent::USniperRunAwayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BackoffTime = 1.00f;
    this->SafeDistanceForTurn = -10.00f;
    this->BackwardsMoveSpeedModifier = 45.00f;
    this->SpeedCurve = NULL;
    this->TurnAnimTriggerAngle = 0.00f;
}


