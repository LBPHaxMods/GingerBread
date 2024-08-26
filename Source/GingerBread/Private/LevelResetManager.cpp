#include "LevelResetManager.h"
#include "Net/UnrealNetwork.h"

ALevelResetManager::ALevelResetManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_bResetting = false;
    this->m_IsServerWaitingUnloadNotification = false;
    this->m_IsServerWaitingReloadNotification = false;
}

void ALevelResetManager::WaitForUnloadingSubLevels() {
}

void ALevelResetManager::WaitForReloadingSubLevels() {
}

void ALevelResetManager::SetResetEnabled(bool bResetEnabled) {
}

void ALevelResetManager::Server_OnSubLevelUnloaded(UGingerbreadStreamingLevel* StreamingLevel) {
}

void ALevelResetManager::Server_OnSubLevelActivated(UGingerbreadStreamingLevel* StreamingLevel) {
}

void ALevelResetManager::RemoveResetBlocker(FName ResetBlockerID) {
}

void ALevelResetManager::OnSackboySpawned(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> spawn_type, USpawnPointComponent* spawn_point) {
}

void ALevelResetManager::OnRep_IsServerWaitingUnloadNotification() {
}

void ALevelResetManager::OnRep_IsServerWaitingReloadNotification() {
}

void ALevelResetManager::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void ALevelResetManager::NetMulticast_StartResetting_Implementation(bool AllPlayersDead) {
}

void ALevelResetManager::NetMulticast_FinishResetting_Implementation(bool AllPlayersDead) {
}

bool ALevelResetManager::IsResetting() const {
    return false;
}

bool ALevelResetManager::IsResetEnabled() const {
    return false;
}

int32 ALevelResetManager::GetResetCount() const {
    return 0;
}

void ALevelResetManager::FullReset() {
}

void ALevelResetManager::CustomReset(TEnumAsByte<ELevelResetBehaviour::Type> ResetBehaviour) {
}

void ALevelResetManager::Client_OnSubLevelUnloaded() {
}

void ALevelResetManager::Client_OnSubLevelLoaded() {
}

void ALevelResetManager::AddResetBlocker(FName ResetBlockerID) {
}

void ALevelResetManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALevelResetManager, m_bResetting);
    DOREPLIFETIME(ALevelResetManager, m_IsServerWaitingUnloadNotification);
    DOREPLIFETIME(ALevelResetManager, m_IsServerWaitingReloadNotification);
}


