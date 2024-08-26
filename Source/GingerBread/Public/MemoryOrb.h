#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "CollectableBase.h"
#include "EMemoryOrbSpawnType.h"
#include "EMemoryOrbState.h"
#include "EPlayerJoinDirection.h"
#include "GingerbreadPlayerId.h"
#include "MemoryOrbCollectedDelegate.h"
#include "MemoryOrb.generated.h"

class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UAttractionCollectableComponent;
class UCameraEffectDataAsset;
class UCollectableHUDMoverComponent;
class UCollectablePickupMoverComponent;
class UCollectableReturnComponent;
class UCurveFloat;
class UDataTable;
class UForceFeedbackEffect;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMemoryOrbsHUDComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPoIComponent;
class UPointLightComponent;
class USpotShadowComponent;
class UTexture2D;
class UTimelineComponent;
class UTrackableSecretComponent;

UCLASS(Blueprintable)
class AMemoryOrb : public ACollectableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OrbReference, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MemoryReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoWake;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMemoryOrbCollected OnMemoryOrbCollected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoIComponent* POI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrackableSecretComponent* TrackableSecret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectableHUDMoverComponent* CollectableHUDMover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectablePickupMoverComponent* CollectablePickupMover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectableReturnComponent* CollectableReturnComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* SoundAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* HapticsAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttractionCollectableComponent* AttractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* CollectAnimVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* SpawnTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DeformationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollectedHaptics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayCollectionLoopHaptics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopCollectionLoopHaptics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloudHitHaptics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* BeginCollectedRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* EndCollectedRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollectedRumbleName;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMemoryOrbSpawnType SpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UParticleSystem* SpawnPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticScaleInDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LocationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpawnAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReturnAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GhostedMaterialParameterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraEffectDataAsset* CameraEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool Spawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ItemPickUpAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ItemPickUpGamepadAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloudHitGamepadAudioEvent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AwardScoreAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AuthoritySackboy, meta=(AllowPrivateAccess=true))
    ASackboy* AuthoritySackboy;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_AuthorityState, meta=(AllowPrivateAccess=true))
    EMemoryOrbState AuthorityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OnCollectedVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OrbDyamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BaseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> ContentDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StaticPS;
    
public:
    AMemoryOrb(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Spawn();
    
    UFUNCTION(BlueprintCallable)
    void SetMemoryTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetMemoryRef(const FDataTableRowHandle& memoryRef);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSpawn(bool Enabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void RunHUDMovementLogic(UCollectablePickupMoverComponent* mover, FVector OrbLocation, FVector OrbPreviousLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RecordMemory();
    
    UFUNCTION(BlueprintCallable)
    void OrbHUBMovementEnded(UCollectableHUDMoverComponent* mover);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnTimelineFinish();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnScaleUpdate(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnLocationUpdate(float Location);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyDied(ASackboy* Sackboy);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReturnComplete(UCollectableReturnComponent* mover);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OrbReference();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AuthorityState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AuthoritySackboy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMemoryTextureLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnDeformationCurveUpdate(float Deformation);
    
    UFUNCTION(BlueprintCallable)
    void OnCollectEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    EMemoryOrbSpawnType GetSpawnType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMemoryOrbsHUDComponent* GetMemoryOrbHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemoryID();
    
};

