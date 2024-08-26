#include "SpawnPointComponent.h"
#include "Net/UnrealNetwork.h"

USpawnPointComponent::USpawnPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("SpawnPoint");
    this->IsSpawningEnabled = true;
    this->AUTH_AllowTracking = false;
    this->OnlySpawnWhenVisible = true;
    this->OnlySpawnWhenAliveSackboyIsInRange = true;
    this->bAlwaysFadeToBlackDuringRespawnSequence = false;
    this->bAlwaysCameraPanDuringRespawnSequence = false;
    this->EnableObstructionTest = true;
    this->EnableSpawnPreventionTest = false;
    this->EnableCameraFocus = true;
    this->bIgnoreFocusTimer = false;
    this->RespawnCameraFocusDuration = 1.50f;
    this->LifetimeState = ESpawnPointLifetimeState::New;
    this->RespawnAllSackboysWhenDisablingForLastStand = false;
    this->AllowGivingGloop = false;
    this->EquipControlMode = EControlMode::None;
    this->SpawnPointType = ESpawnPointType::Checkpoint;
    this->SpawnSlotLockoutDelay = 1.00f;
    this->DetectionRadius = 15.00f;
    this->DetectionHeight = 0.00f;
    this->DetectionHeightOffset = 0.00f;
    this->SpawnDetectionRadius = 45.00f;
    this->SpawnDetectionHeight = 0.00f;
    this->SpawnDetectionHeightOffset = 0.00f;
    this->DetectInAirSackboys = false;
    this->InitialSpawnDelay = 0.20f;
    this->SpawnDelay = 0.20f;
    this->SpawnDuration = 0.70f;
    this->bIsEditable = false;
}

void USpawnPointComponent::TriggerSpawnPoint_Implementation(ASackboy* spawningSackboy, ASackboy* activatorSackboy) {
}

void USpawnPointComponent::SpawnPlayers(const ESackboyQuery SackboyType) {
}

void USpawnPointComponent::ResetCameraFocus() {
}

void USpawnPointComponent::OnRegistrarAvailable(AActor* ManagerActor) {
}

void USpawnPointComponent::OnCameraManagerAvailable(AActor* ManagerActor) {
}

void USpawnPointComponent::NotifyLevelSetupDone() {
}

void USpawnPointComponent::NetSpawnSackboys_Implementation(const ESackboyQuery SackboyType) {
}

FRotator USpawnPointComponent::GetSpawnRotation(int32 spawn_slot) const {
    return FRotator{};
}

FName USpawnPointComponent::GetSpawnPointTypeTag(const ESpawnPointType spawn_point_type) {
    return NAME_None;
}

FVector USpawnPointComponent::GetSpawnLocation(int32 spawn_slot) const {
    return FVector{};
}

void USpawnPointComponent::EnableSpawning() {
}

void USpawnPointComponent::EnableInstantRespawnSequence(bool bSnapCamera) {
}

void USpawnPointComponent::DisableSpawning() {
}

void USpawnPointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpawnPointComponent, IsSpawningEnabled);
    DOREPLIFETIME(USpawnPointComponent, AUTH_AllowTracking);
}


