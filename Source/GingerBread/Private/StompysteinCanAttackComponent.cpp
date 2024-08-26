#include "StompysteinCanAttackComponent.h"

UStompysteinCanAttackComponent::UStompysteinCanAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreSpinMovementDelayFirstTime = 0.00f;
    this->PreSpinTurningDelayFirstTime = 0.00f;
    this->PreSpinTurningDelay = 0.00f;
    this->PreSpinMovementDelayFromTaunt = 0.00f;
    this->PreSpinTurningDelayFromTaunt = 0.00f;
    this->TurnToCameraRotationRate = 0.00f;
}


