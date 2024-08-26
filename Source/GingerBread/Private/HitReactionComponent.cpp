#include "HitReactionComponent.h"
#include "Net/UnrealNetwork.h"

UHitReactionComponent::UHitReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Restart = false;
    this->IsDying = false;
    this->attacker = NULL;
}

void UHitReactionComponent::OnRep_IsServerRunningHR() {
}

void UHitReactionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHitReactionComponent, Rep_ServerHitReactionData);
}


