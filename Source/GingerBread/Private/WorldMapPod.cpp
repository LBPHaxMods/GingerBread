#include "WorldMapPod.h"
#include "Net/UnrealNetwork.h"

AWorldMapPod::AWorldMapPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->PodMesh = NULL;
    this->SackboyInputCollider = NULL;
    this->SackboyYankCollider = NULL;
    this->SackboyInputInteraction = NULL;
    this->SackboyYankInteraction = NULL;
    this->InputSackboy = NULL;
    this->bShouldTick = false;
    this->SackboyCountAtYankDestination = 0;
    this->CurrentState = EPodState::Closed;
    this->AUTH_TargetState = EPodState::Closed;
    this->EntryInProgress = false;
    this->AUTH_HostInPod = false;
    this->AUTH_ActivePlatform = NULL;
    this->PreviousActivePlatform = NULL;
}

void AWorldMapPod::Server_OnWorldSelectScreenClosed(UGingerbreadScreen* screenPopped) {
}




void AWorldMapPod::OnRep_TargetState() {
}

void AWorldMapPod::OnRep_ReplicatedActivePlatform() {
}

void AWorldMapPod::OnRep_HostInPod() {
}


bool AWorldMapPod::IsSequencePlaying_Implementation() {
    return false;
}

void AWorldMapPod::HandleSackboyEnteredPod(ASackboy* Sackboy) {
}

void AWorldMapPod::HandleFinalSackboyEnteredPod(TArray<ASackboy*>& EnteredSackboys) {
}

APodLandingPlatform* AWorldMapPod::GetUsedLandingPlatform() {
    return NULL;
}

void AWorldMapPod::FinishLandingAnimation() {
}

void AWorldMapPod::EnableTriggerVolumes(const bool bEnabled) {
}






void AWorldMapPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWorldMapPod, AUTH_TargetState);
    DOREPLIFETIME(AWorldMapPod, AUTH_HostInPod);
    DOREPLIFETIME(AWorldMapPod, AUTH_ActivePlatform);
}


