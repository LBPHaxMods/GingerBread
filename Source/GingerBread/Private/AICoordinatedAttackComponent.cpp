#include "AICoordinatedAttackComponent.h"

UAICoordinatedAttackComponent::UAICoordinatedAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsCoordinatorRunning = false;
    this->IsBTRunning = false;
    this->IsInterrupted = false;
    this->IsBTAbleToAttack = false;
    this->BTAbleTimer = 0.00f;
    this->CoordinatedAttackAbleTimeout = 3.00f;
}

void UAICoordinatedAttackComponent::SetBTAble(const bool Able) {
}

void UAICoordinatedAttackComponent::OnCoordinatorStarted() {
}

void UAICoordinatedAttackComponent::OnCoordinatorFinished() {
}

void UAICoordinatedAttackComponent::OnBTStarted() {
}

void UAICoordinatedAttackComponent::OnBTFinished(const bool DidSucceed) {
}

void UAICoordinatedAttackComponent::InterruptBT() {
}

bool UAICoordinatedAttackComponent::CanStart() {
    return false;
}


