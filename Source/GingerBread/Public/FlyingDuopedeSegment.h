#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "Carryable.h"
#include "ECarryDropReason.h"
#include "EFlyingDuopedePositions.h"
#include "EFlyingDuopedeSpeed.h"
#include "EFlyingDuopedeState.h"
#include "ESackboyActivity.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "FloatyBubbleEventReceiver.h"
#include "FlyingDuopedeKilledEventDelegate.h"
#include "FlyingDuopedePickedUpEventDelegate.h"
#include "HitPointsComponentEventReceiver.h"
#include "HitPointsModifierComponentEventReceiver.h"
#include "IAIAudio.h"
#include "SackboyDetection.h"
#include "PlayerCountActor.h"
#include "FlyingDuopedeSegment.generated.h"

class AActor;
class ABoomerangProjectile;
class ASackboy;
class ASplineFollowerLeader;
class UAkAudioEvent;
class UAkComponent;
class UBoxComponent;
class UCraftCutterTargetComponent;
class UDataTable;
class UGameplayTagComponent;
class UGrappleTargetComponent;
class UHitPointsComponent;
class UHitPointsModifierComponent;
class UInteractionComponent;
class UParticleSystem;
class UPickupContainerComponent;
class UPrimitiveComponent;
class USackboySlapTargetComponent;
class USkeletalMeshComponent;
class USpotShadowComponent;
class UStaticMeshComponent;
class UThrowTargetComponent;

UCLASS(Blueprintable)
class AFlyingDuopedeSegment : public APlayerCountActor, public ISackboyDetection, public IHitPointsComponentEventReceiver, public IHitPointsModifierComponentEventReceiver, public ICarryable, public IFloatyBubbleEventReceiver, public IIAIAudio {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsComponent* HitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* HitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SackboyCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* SackboyInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GampelayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TopCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* TopInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DuopedeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FrontCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* FrontInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCraftCutterTargetComponent* CraftCutterTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* Ak_FlyingDuopede;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrappleTargetComponent* GrappleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* PickupContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboySlapTargetComponent* SackboySlapTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrowTargetComponent* ThrowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFlyingDuopedeSpeed DuopedeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EFlyingDuopedeState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AnimStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=UpdatePosition, meta=(AllowPrivateAccess=true))
    EFlyingDuopedePositions DuopedePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFlyingDuopedePositions DefaultPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlyingDuopedeKilledEvent DuopedeKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlyingDuopedePickedUpEvent DuopedePickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DeathTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FollowingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyImpactSlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyImpactBouncedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyImpactHeadStomp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyImpactCutter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyImpactBlaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyImpactBlasterHeavy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyOutOfLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DuopedeDeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayCarriedHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopCarriedHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DuopedeAudioEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DuopedeDeathEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDelayToStopCarry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform carryTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLiveDuopede;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLevelPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASplineFollowerLeader> SplineFollowLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSpawnRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASackboy* CarryingSackboy;
    
public:
    AFlyingDuopedeSegment(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UpdatePosition();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SynchroniseAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyColliderHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnFrontColliderHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void CheckForSackboyCarriedState();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    bool OnSackboyWantsToFallThroughMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyWantsToFallThroughMe, return false;);
    
    UFUNCTION()
    void OnSackboyStoppedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails) override PURE_VIRTUAL(OnSackboyStoppedTouchingMe,);
    
    UFUNCTION()
    void OnSackboyStartedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails, const FVector usefulVector, int32 usefulInteger) override PURE_VIRTUAL(OnSackboyStartedTouchingMe,);
    
    UFUNCTION()
    void OnSackboySlappedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 SlapLevel, FVector slapHitLocation, bool isLeftHandSlap) override PURE_VIRTUAL(OnSackboySlappedMe,);
    
    UFUNCTION()
    void OnSackboyExitedMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) override PURE_VIRTUAL(OnSackboyExitedMeInteract,);
    
    UFUNCTION()
    void OnSackboyExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyExitedMe,);
    
    UFUNCTION()
    void OnSackboyEnteredMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) override PURE_VIRTUAL(OnSackboyEnteredMeInteract,);
    
    UFUNCTION()
    void OnSackboyEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyEnteredMe,);
    
    UFUNCTION()
    void OnFishingRodPulledMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& Position, const FVector& Force) override PURE_VIRTUAL(OnFishingRodPulledMe,);
    
    UFUNCTION()
    void OnFishingRodHitMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& Velocity) override PURE_VIRTUAL(OnFishingRodHitMe,);
    
    UFUNCTION()
    void OnFishingRodDetachedFromMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& attach_position) override PURE_VIRTUAL(OnFishingRodDetachedFromMe,);
    
    UFUNCTION()
    void OnFishingRodAttachedToMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& attach_position) override PURE_VIRTUAL(OnFishingRodAttachedToMe,);
    
    UFUNCTION()
    void OnBoomerangHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ABoomerangProjectile* Boomerang, FVector Velocity, int32 charge_level, float boomerang_damage) override PURE_VIRTUAL(OnBoomerangHitMe,);
    
    UFUNCTION()
    void OnBlastersHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& hit_location, const FVector& hit_normal) override PURE_VIRTUAL(OnBlastersHitMe,);
    
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
