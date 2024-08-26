#include "AlertComponent.h"
#include "Net/UnrealNetwork.h"

UAlertComponent::UAlertComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CooldownTimerDeviation = 0.40f;
    this->PropagateDistance = 100.00f;
    this->Instigator = NULL;
    this->AlertState = EAlertState::Idle;
}

void UAlertComponent::UnlockAlertState() {
}

void UAlertComponent::SetAlertState(EAlertState newAlertState, AActor* NewInstigator) {
}

void UAlertComponent::OnRep_AlertState() {
}

void UAlertComponent::LockAlertState() {
}

EAlertState UAlertComponent::GetAlertState() const {
    return EAlertState::Idle;
}

void UAlertComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAlertComponent, AlertState);
}


