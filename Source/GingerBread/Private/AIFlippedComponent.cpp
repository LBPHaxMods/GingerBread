#include "AIFlippedComponent.h"
#include "Net/UnrealNetwork.h"

UAIFlippedComponent::UAIFlippedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlippedTimer = 0.00f;
    this->TotalFlippedTime = 5.00f;
    this->CanModifyPickup = true;
    this->CanSelfUnflip = false;
    this->DazeVFX = NULL;
    this->DazeVFXComponent = NULL;
}

void UAIFlippedComponent::TriggerFlipped() {
}

void UAIFlippedComponent::TriggerDazeVFX_Implementation() {
}

void UAIFlippedComponent::OnRep_FlippedServerData() {
}

bool UAIFlippedComponent::IsFlipped() const {
    return false;
}

float UAIFlippedComponent::GetTimeUntilRecovery() const {
    return 0.0f;
}

void UAIFlippedComponent::EndFlipped() {
}

void UAIFlippedComponent::EndDazeVFX_Implementation() {
}

void UAIFlippedComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIFlippedComponent, Rep_FlippedServerData);
}


