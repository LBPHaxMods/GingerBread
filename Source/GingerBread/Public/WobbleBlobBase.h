#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BlobBurstDelegate.h"
#include "BlobDeflatesDelegate.h"
#include "BlobInflatedDelegate.h"
#include "BlobInflatingDelegate.h"
#include "BlobPickedUpDelegate.h"
#include "Carryable.h"
#include "DarkMatterEngineMovable.h"
#include "Destroyer.h"
#include "ECarryDropReason.h"
#include "EWobbleBlobBaseContents.h"
#include "EWobbleBlobBaseState.h"
#include "EWobbleBlobBaseType.h"
#include "EWobbleBlobMaterialType.h"
#include "EWobbleBlobType.h"
#include "EWorldLocation.h"
#include "FloatyBubbleEventReceiver.h"
#include "HapticsOverridable.h"
#include "HitPointsComponentEventReceiver.h"
#include "InflateBlobDelegate.h"
#include "ReceptacleObject.h"
#include "Templates/SubclassOf.h"
#include "WakeSleep.h"
#include "WobbleBlobBaseDefinition.h"
#include "WobbleBlobBaseMaterialData.h"
#include "WobbleBlobBaseNetStateStructure.h"
#include "WobbleBlobVertexAnimData.h"
#include "WobbleBlobVertexAnimMaterials.h"
#include "PlayerCountActor.h"
#include "WobbleBlobBase.generated.h"

class AActor;
class ACritterReceptacle;
class AExplosionBase;
class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UAnimInstance;
class UArrowComponent;
class UBlastersTargetComponent;
class UCraftCutterTargetComponent;
class UCurveFloat;
class UCurveVector;
class UDataTable;
class UForceFeedbackEffect;
class UGameplayTagComponent;
class UGrappleTargetComponent;
class UHitPointsComponent;
class UHitPointsModifierComponent;
class UNavModifierComponent;
class UPhysicsConstraintComponent;
class UPickupContainerComponent;
class UPrimitiveComponent;
class USackboySlapTargetComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USphereComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTimelineComponent;
class UTriggerActorComponent;
class UVertexAnimatedMeshComponent;

UCLASS(Blueprintable)
class AWobbleBlobBase : public APlayerCountActor, public IWakeSleep, public ICarryable, public IHitPointsComponentEventReceiver, public IReceptacleObject, public IDarkMatterEngineMovable, public IDestroyer, public IFloatyBubbleEventReceiver, public IHapticsOverridable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* SpikeHitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SpikeCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DeflatedBlob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTag1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsComponent* HitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlastersTargetComponent* BlastersTarget;
    
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
    USkeletalMeshComponent* WobbleBlob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVertexAnimatedMeshComponent* BlobVertexAnimMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DeflatedBlobStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AKCompWobbleBlob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* WobbleConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* PickupContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* MegaBlobScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* FloatyMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* ScaleUpBounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* InflateCollision;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BlobCentre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RollBurst;
    
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
    TEnumAsByte<EWobbleBlobBaseType::Type> BlobType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWobbleBlobType::Type> WobbleBlobType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseVertexAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LargeBlob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWobbleBlobBaseContents::Type> BlobContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CutterOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool inflatedUsingBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowDeflation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InflationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InflationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reinflatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float reinflateDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EditCondition_IsWobbleBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bombTimerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeBlastRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallBlastRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisualiseBombDebug;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EditCondition_IsMegaBlob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MegaBlobHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MegaBlobMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeflationRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EditCondition_IsWobbleCopter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFloatyMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WobbleDefinitionDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* WobbleBaseLargeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* WobbleBaseSmallMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SmallBlobSkeletalMeshArray[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* LargeBlobSkeletalMeshArray[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* LargeBlobCollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SmallBlobCollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWobbleBlobMaterialType UserWorldMaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation MaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, FWobbleBlobBaseMaterialData> MaterialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> LargeBlobAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> SmallBlobAnimInstance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DeflatedBlobStaticMeshArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWobbleBlobVertexAnimData VertexAnimDataArray[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, FWobbleBlobVertexAnimMaterials> VertexAnimMaterialsMap;
    
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
    UAkAudioEvent* SquashyPlantExplodeLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FeatherBounceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BombCountdownGamepadAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* MegaBlobScaleAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* FloatyMotionFloatyVectorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleUpBounceAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InflateCollisionInflateAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AExplosionBase> WobbleBombExplosionClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetStateStructure, meta=(AllowPrivateAccess=true))
    FWobbleBlobBaseNetStateStructure NetStateStructure;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInflateBlob OnInflateBlob;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlobBurst OnBlobBurst;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlobPickedUp OnBlobPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlobDeflates OnBlobDeflates;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlobInflating OnBlobInflating;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlobInflated OnBlobInflated;
    
public:
    AWobbleBlobBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void TriggerInflate();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool TriggerBurst(const bool RolledInto);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnPhysicsExplosion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnContents();
    
    UFUNCTION(BlueprintCallable)
    void SetInflatedUsingBlueprint(bool NewInflatedUsingBlueprint);
    
private:
    UFUNCTION(BlueprintCallable)
    void ScaleUpBounceAlpha_TimelineFunc(const float BounceAlpha);
    
    UFUNCTION(BlueprintCallable)
    void ScaleUpBounce_TimelineFinishedFunc();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NetStateStructure();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSettingsAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionMeshWake(UPrimitiveComponent* SelfComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionMeshSleep(UPrimitiveComponent* SelfComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void MegaBlobScaleAlpha_TimelineFunc(const FVector& ScaleAlpha);
    
    UFUNCTION(BlueprintCallable)
    void InflateCollisionInflateAlpha_TimelineFunc(const float InflateAlpha);
    
    UFUNCTION(BlueprintCallable)
    void InflateCollision_TimelineFinishedFunc();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetWobbleDefinition(const FName& RowName, FWobbleBlobBaseDefinition& wobDef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EWobbleBlobBaseState::Type> GetWobbleBlobState() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FloatyMotionFloatyVector_TimelineFunc(const FVector& FloatyVector);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BabyMonkeyCheck(const AActor* Actor, ASackboy*& Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWobbleCopterPropeller();
    

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

