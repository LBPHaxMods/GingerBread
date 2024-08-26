#include "NetworkEventComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

UNetworkEventComponent::UNetworkEventComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("NetworkEventCSPHelper"));
    this->CSPDelay = 0.20f;
}

void UNetworkEventComponent::StartNetworkEvent(FName EventName, bool bUseCSP) {
}

void UNetworkEventComponent::Client_StartEvent_Implementation(FName EventName) {
}

void UNetworkEventComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNetworkEventComponent, CSPDelay);
}


