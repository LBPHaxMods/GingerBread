#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Carryable.h"
#include "DarkMatterEngineMovable.h"
#include "Destroyer.h"
#include "ECarryDropReason.h"
#include "ERhythmicWobbleBlobContents.h"
#include "ERhythmicWobbleBlobNetState.h"
#include "ERhythmicWobbleBlobState.h"
#include "ERhythmicWobbleBlobType.h"
#include "EWorldLocation.h"
#include "FloatyBubbleEventReceiver.h"
#include "HapticsOverridable.h"
#include "HitPointsComponentEventReceiver.h"
#include "InflateRhythmicWobbleBlobDelegate.h"
#include "ReceptacleObject.h"
#include "RhythmicBeatReceiver.h"
#include "RhythmicWobbleBlobBurstDelegate.h"
#include "RhythmicWobbleBlobInflatedDelegate.h"
#include "RhythmicWobbleBlobInflatingDelegate.h"
#include "RhythmicWobbleBlobVertexAnimMaterials.h"
#include "WakeSleep.h"
#include "WobbleBlobBaseDefinition.h"
#include "WobbleBlobVertexAnimData.h"
#include "PlayerCountActor.h"
#include "RhythmicWobbleBlob.generated.h"

class AActor;
class ACritterReceptacle;
class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UArrowComponent;
class UCraftCutterTargetComponent;
class UCurveFloat;
class UDataTable;
class UForceFeedbackEffect;
class UGameplayTagComponent;
class UGrappleTargetComponent;
class UHitPointsComponent;
class UInteractionComponent;
class UNavModifierComponent;
class UPhysicsConstraintComponent;
class UPickupContainerComponent;
class UPrimitiveComponent;
class USackboySlapTargetComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTimelineComponent;
class UTriggerActorComponent;
class UVertexAnimatedMeshComponent;

UCLASS(Blueprintable)
class ARhythmicWobbleBlob : public APlayerCountActor, public IWakeSleep, public ICarryable, public IHitPointsComponentEventReceiver, public IReceptacleObject, public IDarkMatterEngineMovable, public IDestroyer, public IFloatyBubbleEventReceiver, public IHapticsOverridable, public IRhythmicBeatReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTag1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsComponent* HitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCraftCutterTargetComponent* CraftCutterTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrappleTargetComponent* GrappleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboySlapTargetComponent* SackboySlapTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVertexAnimatedMeshComponent* BlobVertexAnimMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DeflatedBlobStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AKCompWobbleBlob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* MeshInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* WobbleConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* PickupContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* InflateCollision;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BlobCentre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BurstLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactVectorLS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool JumpedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BlobIntact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LargeCollectabellLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERhythmicWobbleBlobType::Type> RhythmicWobbleBlobType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetFromBaseForHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetFromBaseForVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaximumCollisionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERhythmicWobbleBlobContents::Type> BlobContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CutterOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reinflatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatFractionSynchronisation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WobbleDefinitionDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* WobbleBaseLargeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* WobbleBaseSmallMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* LargeBlobCollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SmallBlobCollisionMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DeflatedBlobStaticMeshArray[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation MaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, FRhythmicWobbleBlobVertexAnimMaterials> VertexAnimMaterialsMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWobbleBlobVertexAnimData VertexAnimDataArray[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* JumpOnWobbleBlobVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* SlapHitVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollisionHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantGrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantDetach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantWobbleWhistle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantCollisionLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantCollisionSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantWobbleWhistleStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantPopLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantPop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantBarbBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ScoreBubbleEmerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ScoreBubbleEmergeSwish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InflateCollisionInflateAlphaCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetState, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERhythmicWobbleBlobNetState::Type> NetState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInflateRhythmicWobbleBlob OnInflateRhythmicWobbleBlob;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmicWobbleBlobInflating OnRhythmicWobbleBlobInflating;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmicWobbleBlobInflated OnRhythmicWobbleBlobInflated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmicWobbleBlobBurst OnRhythmicWobbleBlobBurst;
    
public:
    ARhythmicWobbleBlob(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    bool TriggerBurst(const bool RolledInto);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnContents();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NetState();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSettingsAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionMeshWake(UPrimitiveComponent* SelfComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionMeshSleep(UPrimitiveComponent* SelfComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnClipLooped(int32 ClipIndex);
    
    UFUNCTION(BlueprintCallable)
    void InflateCollisionInflateAlpha_TimelineFunc(const float InflateAlpha);
    
    UFUNCTION(BlueprintCallable)
    void InflateCollision_TimelineFinishedFunc();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetWobbleDefinition(const FName& RowName, FWobbleBlobBaseDefinition& wobDef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERhythmicWobbleBlobState::Type> GetWobbleBlobState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BabyMonkeyCheck(const AActor* Actor, ASackboy*& Sackboy);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    bool ShouldWaitBeforePickup() override PURE_VIRTUAL(ShouldWaitBeforePickup, return false;);
    
    UFUNCTION()
    void OnThrown(ASackboy* ThrownBy) override PURE_VIRTUAL(OnThrown,);
    
    UFUNCTION()
    void OnSackboyDeath(ASackboy* DeadSackboy) override PURE_VIRTUAL(OnSackboyDeath,);
    
    UFUNCTION()
    void OnPlace(ASackboy* PlacedBy) override PURE_VIRTUAL(OnPlace,);
    
    UFUNCTION()
    void OnPickup(ASackboy* PickedUpBy) override PURE_VIRTUAL(OnPickup,);
    
    UFUNCTION()
    void OnDrop(ASackboy* DroppedBy, ECarryDropReason DropReason) override PURE_VIRTUAL(OnDrop,);
    
    UFUNCTION()
    UPrimitiveComponent* GetCarryPrimitive() override PURE_VIRTUAL(GetCarryPrimitive, return NULL;);
    
    UFUNCTION()
    void OnExitReceptacle(ACritterReceptacle* Receptacle) override PURE_VIRTUAL(OnExitReceptacle,);
    
    UFUNCTION()
    void OnEnterReceptacle(ACritterReceptacle* Receptacle) override PURE_VIRTUAL(OnEnterReceptacle,);
    
    UFUNCTION()
    void OnEjectedByReceptacle(ACritterReceptacle* Receptacle) override PURE_VIRTUAL(OnEjectedByReceptacle,);
    
    UFUNCTION()
    void OnDestroyByReceptacle(ACritterReceptacle* Receptacle) override PURE_VIRTUAL(OnDestroyByReceptacle,);
    
    UFUNCTION()
    void OnCountedByReceptacle(ACritterReceptacle* Receptacle) override PURE_VIRTUAL(OnCountedByReceptacle,);
    
};

