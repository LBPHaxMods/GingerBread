#include "AIActionComponent.h"
#include "Net/UnrealNetwork.h"

UAIActionComponent::UAIActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAIActionComponent::RegisterAction(FName ActionName) {
}

void UAIActionComponent::OnRep_NewAction() {
}

bool UAIActionComponent::DoAction(FName ActionName) {
    return false;
}

void UAIActionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIActionComponent, Rep_NewAction);
    DOREPLIFETIME(UAIActionComponent, ActionTable);
}


