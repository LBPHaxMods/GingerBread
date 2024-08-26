#include "SackboyRespawnManager.h"

ASackboyRespawnManager::ASackboyRespawnManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnVehicleToUse = NULL;
}

void ASackboyRespawnManager::SetRespawnVehiclePathFinding(bool Enable) {
}

void ASackboyRespawnManager::RespawnVehicles() {
}

void ASackboyRespawnManager::RespawnTetheringSackboyOnVehicle(ASackboyRespawnVehicle* VehicleToRespawn) {
}

void ASackboyRespawnManager::RespawnTetheringSackboy(ASackboy* Sackboy) {
}

void ASackboyRespawnManager::RespawnAllTetheringSackboys() {
}

void ASackboyRespawnManager::ResetVehicleTrackingSettingsToDefault() {
}

void ASackboyRespawnManager::ResetSackboyTrackingSettingsToDefault() {
}

void ASackboyRespawnManager::OverrideVehicleTrackingSettings(const FRespawnTrackingSettings& TrackingSettings) {
}

void ASackboyRespawnManager::OverrideSackboyTrackingSettings(const FRespawnTrackingSettings& TrackingSettings) {
}

ASackboyRespawnManager* ASackboyRespawnManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

ASackboy* ASackboyRespawnManager::GetFrontFollowSackboy() const {
    return NULL;
}

int32 ASackboyRespawnManager::GetAvailableVehicleNum() const {
    return 0;
}


