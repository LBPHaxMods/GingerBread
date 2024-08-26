#include "Checkpoint.h"

ACheckpoint::ACheckpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;

    this->SpawnPointComponent = NULL;
    this->IsStartingCheckpoint = false;
    this->EntranceGateResetLives = true;
    this->EnableAutoActivation = true;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Amazon;
}

void ACheckpoint::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void ACheckpoint::OnActivate(USpawnPointComponent* SpawnPoint, ASackboy* Sackboy) {
}

USpawnPointComponent* ACheckpoint::GetSpawnPoint() const {
    return NULL;
}


