#include "PopshotCanAttackComponent.h"

UPopshotCanAttackComponent::UPopshotCanAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CowerStartDistance = 0.00f;
    this->CowerStopDistance = 0.00f;
    this->CowerStartCloseDistance = 0.00f;
    this->CowerStopCloseDistance = 0.00f;
    this->CowerStartHeight = 0.00f;
    this->CowerStopHeight = 0.00f;
    this->UncowerTime = 0.50f;
}


