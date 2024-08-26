#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Carryable.h"
#include "DarkMatterEngineMovable.h"
#include "Destroyer.h"
#include "ECarryDropReason.h"
#include "ETetheredWobbleBlobContents.h"
#include "ETetheredWobbleBlobState.h"
#include "EWobbleBlobMaterialType.h"
#include "EWorldLocation.h"
#include "FloatyBubbleEventReceiver.h"
#include "HapticsOverridable.h"
#include "HitPointsComponentEventReceiver.h"
#include "InflateTetheredBlobDelegate.h"
#include "ReceptacleObject.h"
#include "Templates/SubclassOf.h"
#include "TetheredBlobBurstDelegate.h"
#include "TetheredBlobInflatedDelegate.h"
#include "TetheredBlobInflatingDelegate.h"
#include "TetheredBlobPickedUpDelegate.h"
#include "TetheredWobbleBlobNetStateStructure.h"
#include "TetheredWobbleBlobVertexAnimData.h"
#include "TetheredWobbleBlobVertexAnimMaterials.h"
#include "ThreadInterface.h"
#include "WakeSleep.h"
#include "WobbleBlobBaseDefinition.h"
#include "PlayerCountActor.h"
#include "TetheredWobbleBlob.generated.h"

class AActor;
class ACritterReceptacle;
class ASackboy;
class ATetheredWobbleBlobBase;
class AThread;
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
class UPhysicsThrusterComponent;
class UPickupContainerComponent;
class UPrimitiveComponent;
class USackboySlapTargetComponent;
class UStaticMeshComponent;
class UThrowTargetComponent;
class UTimelineComponent;
class UTriggerActorComponent;
class UVertexAnimatedMeshComponent;

UCLASS(Blueprintable)
class ATetheredWobbleBlob : public APlayerCountActor, public IWakeSleep, public ICarryable, public IHitPointsComponentEventReceiver, public IThreadInterface, public IReceptacleObject, public IDarkMatterEngineMovable, public IDestroyer, public IFloatyBubbleEventReceiver, public IHapticsOverridable {
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
    UVertexAnimatedMeshComponent* BlobVertexAnimMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AKCompWobbleBlob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* MeshInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* PickupContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsThrusterComponent* PhysicsThruster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* InflateCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* PostThrownThrust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrowTargetComponent* ThrowTarget;
    
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
    float Bouyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrusterStrengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETetheredWobbleBlobContents::Type> BlobContents;
    
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
    float FloatUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightGainToBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetachThreadImpulseMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseThreadCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WobbleDefinitionDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATetheredWobbleBlobBase> BaseBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AThread> ThreadBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWobbleBlobMaterialType UserWorldMaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetheredWobbleBlobVertexAnimData VertexAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, FTetheredWobbleBlobVertexAnimMaterials> VertexAnimMaterialsMap;
    
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
    UAkAudioEvent* SquashyPlantCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SquashyPlantWobbleWhistleStop;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PostThrownThrustStrengthCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetStateStructure, meta=(AllowPrivateAccess=true))
    FTetheredWobbleBlobNetStateStructure NetStateStructure;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInflateTetheredBlob OnInflateBlob;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetheredBlobBurst OnBlobBurst;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetheredBlobPickedUp OnBlobPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetheredBlobInflating OnBlobInflating;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetheredBlobInflated OnBlobInflated;
    
public:
    ATetheredWobbleBlob(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void TriggerInflate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerBurst(const bool RolledInto, const bool Slapped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnContents();
    
    UFUNCTION(BlueprintCallable)
    void SetInflatedUsingBlueprint(bool NewInflatedUsingBlueprint);
    
private:
    UFUNCTION(BlueprintCallable)
    void PostThrownThrustStrength_TimelineFunc(const float Strength);
    
    UFUNCTION(BlueprintCallable)
    void PostThrownThrust_TimelineFinishedFunc();
    
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
    void InflateCollisionInflateAlpha_TimelineFunc(const float InflateAlpha);
    
    UFUNCTION(BlueprintCallable)
    void InflateCollision_TimelineFinishedFunc();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetWobbleDefinition(const FName& RowName, FWobbleBlobBaseDefinition& wobDef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ETetheredWobbleBlobState::Type> GetWobbleBlobState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BabyMonkeyCheck(const AActor* Actor, ASackboy*& Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void AddBaseAndThread();
    

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

