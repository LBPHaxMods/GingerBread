#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkMarkerEventCallbackDelegate.h"
#include "AkMusicEventCallbackDelegate.h"
#include "MMCachedCurveSamples.h"
#include "ManualMusicMaterialMapping.h"
#include "MusicManagerLateJoinerSyncReceivedDelegate.h"
#include "MusicMaterialInstance.h"
#include "MusicMaterialInstanceBarCallbackDelegate.h"
#include "MusicMaterialInstanceBeatCallbackDelegate.h"
#include "MusicMaterialInstanceMarkerCallbackDelegate.h"
#include "MusicMaterialInstanceUserCueCallbackDelegate.h"
#include "MusicMaterialMappedObject.h"
#include "MusicMaterialPair.h"
#include "MusicMaterialSettings.h"
#include "MusicManager.generated.h"

class AMusicManager;
class UAkAudioBank;
class UAkAudioEvent;
class UAkComponent;
class UDataTable;
class UMaterialInterface;
class UMeshComponent;
class UObject;

UCLASS(Blueprintable)
class GINGERBREAD_API AMusicManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkMusicEventCallback AKMusicEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkMarkerEventCallback AkMarkerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicManagerLateJoinerSyncReceived LateJoinerSyncReceivedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioBank* BankToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MusicSegmentSyncTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientSyncHeartbeatRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMMCachedCurveSamples> MusicMaterialCachedCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMusicMaterialPair> MusicMaterialPairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManualMusicMaterialMapping> ManualMusicMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMusicMaterialMappedObject> MappedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyMusicManagerVersion;
    
public:
    AMusicManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterMeshMusicMaterial(UMeshComponent* StaticMesh, const int32& LiveMaterialUID);
    
    UFUNCTION(BlueprintCallable)
    void UnbindUserCueEventFromMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceUserCueCallback& Event, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void UnbindEventToMusicMaterialInstanceMarker(const int32& LiveMaterialUID, const FMusicMaterialInstanceMarkerCallback& Event, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void UnbindBeatEventFromMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceBeatCallback& Event, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void UnbindBarEventFromMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceBarCallback& Event, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void SetHapticListeners();
    
    UFUNCTION(BlueprintCallable)
    void SeekMusic(int32 seekTimeMs);
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestSyncWithRetry();
    
    UFUNCTION(BlueprintCallable)
    void RequestSync();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterSingleMeshMusicMaterial(UMeshComponent* StaticMesh, int32 MaterialSlotToReplace, UPARAM(Ref) FMusicMaterialSettings& Settings, int32& LiveMaterialUID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMeshMusicMaterials(UMeshComponent* StaticMesh, const TArray<int32>& MusicMaterialsToMeshSlots, UPARAM(Ref) FMusicMaterialSettings& Settings, int32& LiveMaterialUID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMeshMusicMaterialByIndex(UMeshComponent* StaticMesh, int32 MaterialSlotToReplace, UPARAM(Ref) FMusicMaterialSettings& Settings, int32& LiveMaterialUID, UObject* SerialiseToLevel);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMeshMusicMaterial(UMeshComponent* StaticMesh, UMaterialInterface* Material, FMusicMaterialSettings& Settings, int32& LiveMaterialUID, UObject* SerialiseToLevel);
    
    UFUNCTION(BlueprintCallable)
    void ReapplyMusicMaterialMappings();
    
    UFUNCTION(BlueprintCallable)
    int32 PostInteractiveMusicEvent(UAkAudioEvent* in_pAkEvent, bool SyncBeat, bool SyncBar, bool SyncEntry, bool SyncExit, bool SyncUserCue, UAkComponent* AkComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void PerformClientSyncHeartbeat();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnJoinedPlayerCountChanged(int32 Count);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBankUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnBankLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetMusicMaterialInstance(const int32& LiveMaterialUID, FMusicMaterialInstance& Instance, bool& Success);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetMusicManager(UObject* WorldContextObject, AMusicManager*& MusicManagerOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurveValue(int32 CurveIndex, float InTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurveDuration(int32 CurveIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void FlushMusicMaterialData();
    
    UFUNCTION(BlueprintCallable)
    void DebugPulse();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CheckSyncForClients(int32 ServerPosition, FName ServerCurrentSection, int32 ServerCurrentSegment, int32 ServerCurrentSegmentDuration);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindUserCueEventToMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceUserCueCallback& Event, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void BindEventToMusicMaterialInstanceMarker(const int32& LiveMaterialUID, const FMusicMaterialInstanceMarkerCallback& Event, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void BindBeatEventToMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceBeatCallback& Event, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void BindBarEventToMusicMaterialInstance(const int32& LiveMaterialUID, const FMusicMaterialInstanceBarCallback& Event, bool& Success);
    
};

