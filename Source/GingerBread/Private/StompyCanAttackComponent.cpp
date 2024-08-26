#include "StompyCanAttackComponent.h"

UStompyCanAttackComponent::UStompyCanAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinTimeToSwitchTargets = 0.00f;
    this->StartMovingDistance = 0.00f;
    this->StopMovingDistance = 0.00f;
    this->TimeSinceLastAttack = 0.00f;
    this->PreSpinMovementDelay = 0.00f;
}


