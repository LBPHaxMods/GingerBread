#include "GameplayAudioManager.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "AudioGlobalSackboyState.h"
#include "AudioNPCAlertState.h"
#include "AudioRollHoleLogic.h"
#include "EmitterManagerComponent.h"

AGameplayAudioManager::AGameplayAudioManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->AudioMaterialDataTable = NULL;
    this->audioListenerLockDistance = 300.00f;
    this->bEnableAudioListenerDistanceLock = false;
    this->bShowAudioListenerWhenLocked = false;
    this->bShowListenerLockSphere = false;
    this->distanceToFocuspointRTPCMax = 50.00f;
    this->pRootComponent = (USceneComponent*)RootComponent;
    this->pAudioSackboyState = CreateDefaultSubobject<UAudioGlobalSackboyState>(TEXT("AudioSackboyState"));
    this->pAudioNPCAlertState = CreateDefaultSubobject<UAudioNPCAlertState>(TEXT("AudioNPCAlertState"));
    this->pAudioRollHoleLogic = CreateDefaultSubobject<UAudioRollHoleLogic>(TEXT("AudioRollHoleLogic"));
    this->bEnableBPReplacements = false;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_GameplayAudioManager"));
    this->pEmitterManager = CreateDefaultSubobject<UEmitterManagerComponent>(TEXT("EmitterManager"));
    this->nUpdateFrequency = 0.25f;
    this->bEnableRoomOptimisation = true;
    this->bEnableOptimisedTicking = true;
    this->IdleSackboyOverrideLimit = 100;
    this->ExtendedHoverStateTime = 3.00f;
    this->LevelObjectHapticsTable = NULL;
    this->SurfaceMaterialHapticsTable = NULL;
    this->RollBumpMeshHapticsTable = NULL;
    this->PlayerJoinedGameSFX = NULL;
    this->PlayerJoinedGameHaptic = NULL;
    this->PlayerJoinedGamepadAudio = NULL;
    this->PlayerLeavingGameSFX = NULL;
    this->PlayerLeavingGameHaptic = NULL;
    this->PlayerLeavingGamepadAudio = NULL;
    this->SackboyLeftGameSFX = NULL;
    this->SackboyLeftHaptic = NULL;
    this->SackboyLeftGamepadAudio = NULL;
    this->pAudioSackboyState->SetupAttachment(RootComponent);
    this->pAudioNPCAlertState->SetupAttachment(RootComponent);
    this->pAudioRollHoleLogic->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->pEmitterManager->SetupAttachment(RootComponent);
}

bool AGameplayAudioManager::SetBusEffect(const FString& BusName, int32 Index, const FString& shareSetName) {
    return false;
}

void AGameplayAudioManager::SetAuxBus(UAkComponent* pComponent, const FString& AuxBusName, int32 ListenerID, float fControlValue) {
}

void AGameplayAudioManager::PostCutsceneHapticsEvent(UAkAudioEvent* HapticsAudioEvent) {
}

bool AGameplayAudioManager::PlayEquiptSweeteners(ASackboy* pSackboy, UAkComponent* pComponent, ECostumeAudioMovementEvents Event) {
    return false;
}

void AGameplayAudioManager::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void AGameplayAudioManager::OnPersistentAudioStarted(EPersistentAudioType AudioType) {
}

void AGameplayAudioManager::OnJoinedPlayerCountChanged(int32 Count) {
}

bool AGameplayAudioManager::GetHeadphonePluggedIn() {
    return false;
}

bool AGameplayAudioManager::GetHapticsEventsForSurfaceMaterial(UObject* WorldContextObject, const USumoPhysicalMaterial* SurfaceMaterial, FSurfaceMaterialHapticsRow& OutHapticsEvents) {
    return false;
}

bool AGameplayAudioManager::GetHapticsEventsForLevelObject(UObject* WorldContextObject, AActor* LevelObject, FLevelObjectHapticsRow& OutHapticsEvents) {
    return false;
}

bool AGameplayAudioManager::GetGetRollBumpHapticRowForMesh(UObject* WorldContextObject, const UStaticMesh* InRollBumpMesh, FRollBumpMeshHapticsRow& OutRollBumpMeshRow) {
    return false;
}

AGameplayAudioManager* AGameplayAudioManager::GetGameplayAudioManager(const UObject* WorldContextObject) {
    return NULL;
}

UAkAudioEvent* AGameplayAudioManager::GetDamageHapticsEventForLevelObject(UObject* WorldContextObject, AActor* LevelObject, EHapticsDamageType DamageType, EHapticsDamageResult DamageResult) {
    return NULL;
}

UAkAudioEvent* AGameplayAudioManager::GetDamageGamepadEventForLevelObject(UObject* WorldContextObject, AActor* LevelObject, EHapticsDamageType DamageType, EHapticsDamageResult DamageResult) {
    return NULL;
}

void AGameplayAudioManager::EnableAudio3D(bool bEnable) {
}


