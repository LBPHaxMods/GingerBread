#pragma once
#include "CoreMinimal.h"
#include "ECostumeAudioMovementEvents.h"
#include "EHapticsDamageResult.h"
#include "EHapticsDamageType.h"
#include "EPersistentAudioType.h"
#include "EPlayerJoinDirection.h"
#include "GingerbreadManager.h"
#include "GingerbreadPlayerId.h"
#include "LevelObjectHapticsRow.h"
#include "LookupTableColumn.h"
#include "PersistentAudioInfo.h"
#include "RollBumpMeshHapticsRow.h"
#include "SurfaceMaterialHapticsRow.h"
#include "GameplayAudioManager.generated.h"

class AActor;
class AGameplayAudioManager;
class ASackboy;
class UAkAudioBank;
class UAkAudioEvent;
class UAkComponent;
class UAudioGlobalSackboyState;
class UAudioNPCAlertState;
class UAudioRollHoleLogic;
class UCostumeItemFXDescriptor;
class UDataTable;
class UEmitterManagerComponent;
class UObject;
class USceneComponent;
class UStaticMesh;
class USumoPhysicalMaterial;

UCLASS(Blueprintable)
class GINGERBREAD_API AGameplayAudioManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPersistentAudioType, FPersistentAudioInfo> PersistentAudioSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AudioMaterialDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLookupTableColumn> AudioEventLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float audioListenerLockDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableAudioListenerDistanceLock: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowAudioListenerWhenLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowListenerLockSphere: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float distanceToFocuspointRTPCMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* pRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioGlobalSackboyState* pAudioSackboyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioNPCAlertState* pAudioNPCAlertState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioRollHoleLogic* pAudioRollHoleLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableBPReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmitterManagerComponent* pEmitterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float nUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRoomOptimisation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOptimisedTicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EmitterManagerWorldNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdleSackboyOverrideLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtendedHoverStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExtendedHoverStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoxDrySendRTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> HardReferenceToBanksAllPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCostumeItemFXDescriptor*> HardReferenceToSFXAllPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> FXAuxBusRTPCMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelObjectHapticsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SurfaceMaterialHapticsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RollBumpMeshHapticsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, FLevelObjectHapticsRow> LevelObjectHapticsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, FRollBumpMeshHapticsRow> RollBumpMeshHapticsMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerJoinedGameSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerJoinedGameHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerJoinedGamepadAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerLeavingGameSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerLeavingGameHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerLeavingGamepadAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SackboyLeftGameSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SackboyLeftHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SackboyLeftGamepadAudio;
    
public:
    AGameplayAudioManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetBusEffect(const FString& BusName, int32 Index, const FString& shareSetName);
    
    UFUNCTION(BlueprintCallable)
    void SetAuxBus(UAkComponent* pComponent, const FString& AuxBusName, int32 ListenerID, float fControlValue);
    
    UFUNCTION(BlueprintCallable)
    void PostCutsceneHapticsEvent(UAkAudioEvent* HapticsAudioEvent);
    
    UFUNCTION(BlueprintCallable)
    bool PlayEquiptSweeteners(ASackboy* pSackboy, UAkComponent* pComponent, ECostumeAudioMovementEvents Event);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPersistentAudioStarted(EPersistentAudioType AudioType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnJoinedPlayerCountChanged(int32 Count);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetHeadphonePluggedIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetHapticsEventsForSurfaceMaterial(UObject* WorldContextObject, const USumoPhysicalMaterial* SurfaceMaterial, FSurfaceMaterialHapticsRow& OutHapticsEvents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetHapticsEventsForLevelObject(UObject* WorldContextObject, AActor* LevelObject, FLevelObjectHapticsRow& OutHapticsEvents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetGetRollBumpHapticRowForMesh(UObject* WorldContextObject, const UStaticMesh* InRollBumpMesh, FRollBumpMeshHapticsRow& OutRollBumpMeshRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGameplayAudioManager* GetGameplayAudioManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAkAudioEvent* GetDamageHapticsEventForLevelObject(UObject* WorldContextObject, AActor* LevelObject, EHapticsDamageType DamageType, EHapticsDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAkAudioEvent* GetDamageGamepadEventForLevelObject(UObject* WorldContextObject, AActor* LevelObject, EHapticsDamageType DamageType, EHapticsDamageResult DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void EnableAudio3D(bool bEnable);
    
};

