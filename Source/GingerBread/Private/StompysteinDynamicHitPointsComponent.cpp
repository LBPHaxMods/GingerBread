#include "StompysteinDynamicHitPointsComponent.h"
#include "Net/UnrealNetwork.h"

UStompysteinDynamicHitPointsComponent::UStompysteinDynamicHitPointsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Rep_IsInvulnerable = false;
}

void UStompysteinDynamicHitPointsComponent::OnRep_IsInvulnerable() {
}

void UStompysteinDynamicHitPointsComponent::OnFightStarted(int32 SackboyNum) {
}

bool UStompysteinDynamicHitPointsComponent::HasPassedThreshold() {
    return false;
}

void UStompysteinDynamicHitPointsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStompysteinDynamicHitPointsComponent, Rep_IsInvulnerable);
}


