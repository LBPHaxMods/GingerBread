#include "TriggerRegistrarComponent.h"

UTriggerRegistrarComponent::UTriggerRegistrarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssignedToTrigger = false;
}

void UTriggerRegistrarComponent::SetAssignedToTrigger(bool bInAssigned) {
}

void UTriggerRegistrarComponent::RegisterActor(AActor* InActor) {
}


