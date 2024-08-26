#include "SpotShadowManagerComponent.h"
#include "Net/UnrealNetwork.h"

USpotShadowManagerComponent::USpotShadowManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HideShadowAfterShrink = true;
    this->SpotShadowState = ESpotShadowState::Grown;
}

void USpotShadowManagerComponent::SnapAIToLocation_Implementation(float X, float Y) {
}

void USpotShadowManagerComponent::OnRep_SpotShadowState() {
}

void USpotShadowManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpotShadowManagerComponent, SpotShadowState);
}


