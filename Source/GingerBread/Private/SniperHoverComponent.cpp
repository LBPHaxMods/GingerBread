#include "SniperHoverComponent.h"
#include "Net/UnrealNetwork.h"

USniperHoverComponent::USniperHoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoverHeight = 15.00f;
    this->LaunchDuration = 0.40f;
    this->LaunchAction = TEXT("TakeoffAnim");
    this->LaunchDelay = 0.66f;
    this->BoosterVFXDelay = 0.55f;
    this->DescendDuration = 0.50f;
    this->BoostDescendMaxSpeed = 80.00f;
    this->LandingPredictAhead = 0.01f;
    this->LandingAnimDuration = 0.90f;
    this->IsHovering = false;
}

void USniperHoverComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USniperHoverComponent, IsHovering);
}


