#include "CSPRideonHelperComponent.h"
#include "Net/UnrealNetwork.h"

UCSPRideonHelperComponent::UCSPRideonHelperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClientCorrectionSnapTolerance = 60.00f;
    this->ClientCorrectionDuration = 1.00f;
}

void UCSPRideonHelperComponent::OnRep_ServerCurrentAlpha() {
}

void UCSPRideonHelperComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCSPRideonHelperComponent, ServerInfo);
}


