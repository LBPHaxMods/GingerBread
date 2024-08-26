#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Carryable.h"
#include "CustomBBKeySelector.h"
#include "ECarryDropReason.h"
#include "EPopshotConfigVariant.h"
#include "GingerbreadAICharacter.h"
#include "Popshot.generated.h"

class ASackboy;
class UAISpawnComponent;
class UAITargetPredictionComponent;
class UAIThrownComponent;
class UActorPoolComponent;
class UAkAudioEvent;
class UCapsuleComponent;
class UForceFeedbackEffect;
class UInteractionComponent;
class ULookAtComponent;
class UPopshotActionComponent;
class UPopshotAnimInstance;
class UPopshotCanAttackComponent;
class UPopshotCowerComponent;
class UPopshotRecoilComponent;
class UPopshotReturnHomeComponent;
class UPopshotShootProjectileComponent;
class UPopshotTailComponent;
class UPopshotTurnToTargetComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS(Blueprintable)
class APopshot : public AGingerbreadAICharacter, public ICarryable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* TailCollisionBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TailVisualBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TailMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* HealthCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* HealthInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ThrownObjectsCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopshotActionComponent* PopshotActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopshotCanAttackComponent* PopshotCanAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIThrownComponent* ThrownComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopshotRecoilComponent* PopshotRecoilComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopshotReturnHomeComponent* PopshotReturnHomeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopshotTailComponent* PopshotTailComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorPoolComponent* ProjectilePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopshotTurnToTargetComponent* PopshotTurnToTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULookAtComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopshotCowerComponent* PopshotCowerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopshotShootProjectileComponent* PopshotShootProjectileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAISpawnComponent* SpawnComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAITargetPredictionComponent* PredictionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPopshotAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPopshotConfigVariant PopshotVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DefaultHitPointsResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CowerHitPointsResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector BeingThrownBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector BeingCarriedBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector ShouldTumbleBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector IsSpawningBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TailPullLoopRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TailPullLoopStartHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TailPullLoopStopHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TailOverpulledHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* TailOverpulledVibration;
    
    APopshot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTailVisibility(bool showTail);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TailOverPulled(ASackboy* MurdererSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TailGrabChanged(bool IsGrabbed);
    

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
    
};

