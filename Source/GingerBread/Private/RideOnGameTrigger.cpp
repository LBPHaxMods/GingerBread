#include "RideOnGameTrigger.h"
#include "Net/UnrealNetwork.h"

ARideOnGameTrigger::ARideOnGameTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CurrentMode = EGameTriggerActivationMode::Automatic;
    this->TriggerVolume = NULL;
}

void ARideOnGameTrigger::ToggleActorAwake(AActor*& Actor, bool bWake) {
}

void ARideOnGameTrigger::SetTriggerActivationMode(EGameTriggerActivationMode NewActivationMode) {
}

void ARideOnGameTrigger::SetActorsEnabled(bool bEnableActors, bool Force) {
}

void ARideOnGameTrigger::Server_OnTriggerManagerAvailable(AActor* ManagerActor) {
}

void ARideOnGameTrigger::Server_OnNetworkManagerAvailable() {
}

void ARideOnGameTrigger::OnRep_TriggerActors() {
}

void ARideOnGameTrigger::OnRep_CurrentMode() {
}

void ARideOnGameTrigger::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARideOnGameTrigger, CurrentMode);
    DOREPLIFETIME(ARideOnGameTrigger, TriggerActors);
}


