#include "AICoordinatorRegistrationComponent.h"

UAICoordinatorRegistrationComponent::UAICoordinatorRegistrationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyGroupType = EEnemyGroupType::Invalid;
}

void UAICoordinatorRegistrationComponent::Unregister() {
}

void UAICoordinatorRegistrationComponent::Register() {
}

void UAICoordinatorRegistrationComponent::OnCoordinatorManagerAvailable(AActor* ManagerActor) {
}


