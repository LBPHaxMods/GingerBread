#include "MinibossMeanieSlamAttackComponent.h"
#include "Net/UnrealNetwork.h"

UMinibossMeanieSlamAttackComponent::UMinibossMeanieSlamAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Rep_SlamAttackPlayRate = 1.00f;
}

void UMinibossMeanieSlamAttackComponent::OnRep_SlamAttackPlayRate() {
}

void UMinibossMeanieSlamAttackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMinibossMeanieSlamAttackComponent, Rep_SlamAttackPlayRate);
}


