#include "TriggerActorComponent.h"
#include "Net/UnrealNetwork.h"

UTriggerActorComponent::UTriggerActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsAwake = false;
}

void UTriggerActorComponent::OnTriggerManagerAvailable(AActor* ManagerActor) {
}

void UTriggerActorComponent::OnRep_IsAwake() {
}

FGuid UTriggerActorComponent::GetGuid() const {
    return FGuid{};
}

void UTriggerActorComponent::EDITOR_TEST_ONLY_ForceAwake(bool bForceAwake) {
}

void UTriggerActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTriggerActorComponent, bIsAwake);
}


