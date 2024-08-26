#include "MusicManager.h"

AMusicManager::AMusicManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->BankToLoad = NULL;
    this->MusicSegmentSyncTable = NULL;
    this->ClientSyncHeartbeatRate = 2.00f;
    this->MyMusicManagerVersion = 0;
}

void AMusicManager::UnregisterMeshMusicMaterial(UMeshComponent* StaticMesh, const int32& LiveMaterialUID) {
}

void AMusicManager::UnbindUserCueEventFromMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceUserCueCallback& Event, bool& Success) {
}

void AMusicManager::UnbindEventToMusicMaterialInstanceMarker(const int32& LiveMaterialUID, const FMusicMaterialInstanceMarkerCallback& Event, bool& Success) {
}

void AMusicManager::UnbindBeatEventFromMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceBeatCallback& Event, bool& Success) {
}

void AMusicManager::UnbindBarEventFromMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceBarCallback& Event, bool& Success) {
}

void AMusicManager::SetHapticListeners() {
}

void AMusicManager::SeekMusic(int32 seekTimeMs) {
}

void AMusicManager::RequestSyncWithRetry() {
}

void AMusicManager::RequestSync() {
}

void AMusicManager::RegisterSingleMeshMusicMaterial(UMeshComponent* StaticMesh, int32 MaterialSlotToReplace, FMusicMaterialSettings& Settings, int32& LiveMaterialUID) {
}

void AMusicManager::RegisterMeshMusicMaterials(UMeshComponent* StaticMesh, const TArray<int32>& MusicMaterialsToMeshSlots, FMusicMaterialSettings& Settings, int32& LiveMaterialUID) {
}

void AMusicManager::RegisterMeshMusicMaterialByIndex(UMeshComponent* StaticMesh, int32 MaterialSlotToReplace, FMusicMaterialSettings& Settings, int32& LiveMaterialUID, UObject* SerialiseToLevel) {
}

void AMusicManager::RegisterMeshMusicMaterial(UMeshComponent* StaticMesh, UMaterialInterface* Material, FMusicMaterialSettings& Settings, int32& LiveMaterialUID, UObject* SerialiseToLevel) {
}

void AMusicManager::ReapplyMusicMaterialMappings() {
}

int32 AMusicManager::PostInteractiveMusicEvent(UAkAudioEvent* in_pAkEvent, bool SyncBeat, bool SyncBar, bool SyncEntry, bool SyncExit, bool SyncUserCue, UAkComponent* AkComponent) {
    return 0;
}

void AMusicManager::PerformClientSyncHeartbeat() {
}

void AMusicManager::OnJoinedPlayerCountChanged(int32 Count) {
}

void AMusicManager::OnBankUnloaded() {
}

void AMusicManager::OnBankLoaded() {
}

void AMusicManager::GetMusicMaterialInstance(const int32& LiveMaterialUID, FMusicMaterialInstance& Instance, bool& Success) {
}

bool AMusicManager::GetMusicManager(UObject* WorldContextObject, AMusicManager*& MusicManagerOut) {
    return false;
}

float AMusicManager::GetCurveValue(int32 CurveIndex, float InTime) const {
    return 0.0f;
}

float AMusicManager::GetCurveDuration(int32 CurveIndex) const {
    return 0.0f;
}

void AMusicManager::FlushMusicMaterialData() {
}

void AMusicManager::DebugPulse() {
}

void AMusicManager::CheckSyncForClients_Implementation(int32 ServerPosition, FName ServerCurrentSection, int32 ServerCurrentSegment, int32 ServerCurrentSegmentDuration) {
}

void AMusicManager::BindUserCueEventToMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceUserCueCallback& Event, bool& Success) {
}

void AMusicManager::BindEventToMusicMaterialInstanceMarker(const int32& LiveMaterialUID, const FMusicMaterialInstanceMarkerCallback& Event, bool& Success) {
}

void AMusicManager::BindBeatEventToMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceBeatCallback& Event, bool& Success) {
}

void AMusicManager::BindBarEventToMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceBarCallback& Event, bool& Success) {
}


