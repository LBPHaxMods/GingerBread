#include "ControlModePickup.h"
#include "Net/UnrealNetwork.h"

AControlModePickup::AControlModePickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickupType = EControlMode::None;
    this->RespawnCollisionActivateTime = 1.00f;
    this->EquipItemAudioEffects[0] = NULL;
    this->EquipItemAudioEffects[1] = NULL;
    this->EquipItemAudioEffects[2] = NULL;
    this->EquipItemAudioEffects[3] = NULL;
    this->EquipItemAudioEffects[4] = NULL;
}

bool AControlModePickup::TryToEnterNewControlMode(ASackboy* Sackboy) {
    return false;
}

void AControlModePickup::SetText_Implementation(EControlMode control_mode) {
}

void AControlModePickup::OnSpawned(EControlMode control_mode, FVector Force, float collection_delay) {
}


void AControlModePickup::NetMulticast_CollectedBySackboy_Implementation(ASackboy* CollectingSackboy) {
}

void AControlModePickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AControlModePickup, PickupType);
}


