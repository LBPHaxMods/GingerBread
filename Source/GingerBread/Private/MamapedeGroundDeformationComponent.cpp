#include "MamapedeGroundDeformationComponent.h"
#include "Net/UnrealNetwork.h"

UMamapedeGroundDeformationComponent::UMamapedeGroundDeformationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyDeformationActive = true;
    this->UseFakeBodyDeformation = false;
}

void UMamapedeGroundDeformationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMamapedeGroundDeformationComponent, BodyDeformationActive);
    DOREPLIFETIME(UMamapedeGroundDeformationComponent, UseFakeBodyDeformation);
    DOREPLIFETIME(UMamapedeGroundDeformationComponent, Server_GroundCrackingState);
}


