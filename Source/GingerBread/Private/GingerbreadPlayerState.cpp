#include "GingerbreadPlayerState.h"
#include "Net/UnrealNetwork.h"

AGingerbreadPlayerState::AGingerbreadPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CostumeReplicator = NULL;
    this->NetPlayerIndex = -1;
    this->ControllerId = 0;
    this->Started = false;
    this->IsReadyForLevel = false;
    this->ControllerAssigned = false;
    this->IsInMenu = false;
}

void AGingerbreadPlayerState::Server_SingleClientPlayerJoinSync_Implementation(const FGingerbreadPlayerId& player_id) {
}

void AGingerbreadPlayerState::Server_SetPlayerReadyForLevel_Implementation(bool player_ready, bool player_joined_game, EPlayerJoinDirection last_seen_join_dir) {
}

void AGingerbreadPlayerState::Server_SetPlayerInMenu_Implementation(bool PlayerIsInMenu) {
}
bool AGingerbreadPlayerState::Server_SetPlayerInMenu_Validate(bool PlayerIsInMenu) {
    return true;
}

void AGingerbreadPlayerState::Server_PlayerJoinSync_Implementation(FPlayerJoinPacket pjp) {
}

void AGingerbreadPlayerState::Server_PlayerJoinRelease_Implementation() {
}

void AGingerbreadPlayerState::Server_PlayerCostumeReadinessOnClient_Implementation(const FGingerbreadPlayerId& player_id, bool is_ready) {
}

void AGingerbreadPlayerState::OnRep_Started() {
}

void AGingerbreadPlayerState::OnRep_ReadyForLevel() {
}

void AGingerbreadPlayerState::OnRep_PlayerInMenu() {
}

void AGingerbreadPlayerState::OnRep_ControllerAssigned() {
}

void AGingerbreadPlayerState::NotifyClientKicked_Implementation(EKickReason KickReason) {
}

void AGingerbreadPlayerState::Multicast_SetPlayerReadyForLevel_Implementation(bool player_ready, bool player_joined_game, EPlayerJoinDirection last_seen_join_dir) {
}

void AGingerbreadPlayerState::Multicast_PlayerJoinSync_Implementation(const FPlayerJoinPacket& pjp) {
}

void AGingerbreadPlayerState::Client_PlayerJoinSync_Implementation(const FGingerbreadPlayerId& player_id, const FPlayerJoinPacket& pjp) {
}

void AGingerbreadPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGingerbreadPlayerState, CostumeReplicator);
    DOREPLIFETIME(AGingerbreadPlayerState, PrimaryPlayerNetId);
    DOREPLIFETIME(AGingerbreadPlayerState, NetPlayerIndex);
    DOREPLIFETIME(AGingerbreadPlayerState, ControllerId);
    DOREPLIFETIME(AGingerbreadPlayerState, Started);
    DOREPLIFETIME(AGingerbreadPlayerState, IsReadyForLevel);
    DOREPLIFETIME(AGingerbreadPlayerState, ControllerAssigned);
    DOREPLIFETIME(AGingerbreadPlayerState, IsInMenu);
}


