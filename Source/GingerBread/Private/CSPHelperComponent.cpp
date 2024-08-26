#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

UCSPHelperComponent::UCSPHelperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Server_LatestActionID = 0;
}

void UCSPHelperComponent::OnRep_ServerLatestActionID() {
}

void UCSPHelperComponent::OnRep_CSPActions() {
}

void UCSPHelperComponent::Client_AddCSPAction_Implementation(const FCSPHelperAction& CSPAction) {
}

void UCSPHelperComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCSPHelperComponent, CSPActions);
    DOREPLIFETIME(UCSPHelperComponent, Server_LatestActionID);
}


