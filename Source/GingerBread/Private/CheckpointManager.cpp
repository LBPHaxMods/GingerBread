#include "CheckpointManager.h"
#include "Net/UnrealNetwork.h"

ACheckpointManager::ACheckpointManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DisableMissingCheckpointMessage = false;
    this->AUTH_CurrentActiveSpawnPoint = NULL;
    this->PreviousActiveSpawnPoint = NULL;
    this->AUTH_SequenceRequest = ECheckpointSequenceRequest::None;
}

void ACheckpointManager::StartRespawnSequence() {
}

void ACheckpointManager::StartCheckpointSequence(const UObject* WorldContextObject, ECheckpointSequenceRequest Sequence) {
}

void ACheckpointManager::SetActiveSpawnPoint(const UObject* WorldContextObject, USpawnPointComponent* SpawnPoint, ASackboy* Sackboy) {
}

void ACheckpointManager::OnRep_SequenceRequest() {
}

void ACheckpointManager::OnRep_ReplicatedActiveSpawnPoint() {
}

void ACheckpointManager::OnRep_DoorwaySequenceRequest() {
}

bool ACheckpointManager::IsRespawnSequenceReady() {
    return false;
}

USpawnPointComponent* ACheckpointManager::GetStartingSpawnPoint() {
    return NULL;
}

USpawnPointComponent* ACheckpointManager::GetSpawnPointByName(const UObject* WorldContextObject, const FName spawn_point_name) {
    return NULL;
}

bool ACheckpointManager::GetLastActivatedSpawnPointState(const UObject* WorldContextObject, ESpawnPointType spawn_point_type, FSpawnPointActivationState& State) {
    return false;
}

FName ACheckpointManager::GetLastActivatedSpawnPointName(const UObject* WorldContextObject, ESpawnPointType spawn_point_type) {
    return NAME_None;
}

ACheckpointManager* ACheckpointManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

void ACheckpointManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACheckpointManager, AUTH_CurrentActiveSpawnPoint);
    DOREPLIFETIME(ACheckpointManager, AUTH_SequenceRequest);
    DOREPLIFETIME(ACheckpointManager, AUTH_DoorwaySequenceRequest);
}


