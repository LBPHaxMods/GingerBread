#include "MeanieSpinAttackComponent.h"

UMeanieSpinAttackComponent::UMeanieSpinAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerRingRotatesClockwise = false;
    this->RotationDirectionTogglesAfterEachAttack = true;
    this->BombPopAnimTime = 0.00f;
    this->PopBombsDelay = 0.00f;
}


