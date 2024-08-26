#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "CustomBBKeySelector.h"
#include "EAlertState.h"
#include "EMinibossMeanieAdditiveState.h"
#include "EMinibossMeanieConfigVariant.h"
#include "GingerbreadAICharacter.h"
#include "HitPointsModifierComponentEventReceiver.h"
#include "MeanieMinibossGenericDelegateDelegate.h"
#include "MeanieMiniboss.generated.h"

class AActor;
class AGrunty;
class AMeanieMinibossArenaRingManager;
class UAIAttackRangeComponent;
class UAITargetPredictionComponent;
class UAkComponent;
class UBoxComponent;
class UCapsuleComponent;
class UGameplayTagComponent;
class UHitPointsModifierComponent;
class UInteractionComponent;
class UMeanieMinibossCommanderComponent;
class UMeanieMinibossDynamicHitPointsComponent;
class UMeanieMinibossFallComponent;
class UMinibossMeanieActionComponent;
class UMinibossMeanieMovementParamsComponent;
class UMinibossMeaniePhaseComponent;
class UMinibossMeaniePunchAttackComponent;
class UMinibossMeanieSlamAttackComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AMeanieMiniboss : public AGingerbreadAICharacter, public IHitPointsModifierComponentEventReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* HeadCapsuleFallen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HeadBoxUpright;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* HeadBoxGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HeadHealthCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* LegsCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LeftHandSlamDamageCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RightHandSlamDamageCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LeftHandShootDamageCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RightHandShootDamageCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LeftArmDamageCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RightArmDamageCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailVFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* HeadFallenInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* HeadUprightInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* HeadHealthInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* LegsInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* LeftHandSlamDamageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* RightHandSlamDamageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* LeftHandShootDamageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* RightHandShootDamageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* LeftArmDamageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* RightArmDamageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* ShootLeftShortRangeHitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* ShootRightShortRangeHitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* ShootLeftLongRangeHitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* ShootRightLongRangeHitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* LeftSlamHitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* RightSlamHitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIAttackRangeComponent* AttackRangeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMinibossMeanieActionComponent* MeanieMinibossActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMinibossMeaniePhaseComponent* MeanieMinibossPhaseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMinibossMeanieMovementParamsComponent* MeanieMinibossMovementParamsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMinibossMeaniePunchAttackComponent* MeanieMinibossPunchAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeanieMinibossDynamicHitPointsComponent* DynamicHitPointsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeanieMinibossFallComponent* FallComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMinibossMeanieSlamAttackComponent* SlamAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeanieMinibossCommanderComponent* CommanderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAITargetPredictionComponent* TargetPredictionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkHapticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMinibossMeanieConfigVariant Variant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGingerbreadAICharacter*> WeakpointGrunties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MeanieMinibossGruntyKilledEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector NeedsToFallBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector ArenaCentreActorBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector CurrentPhaseBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector AttackChoiceBB;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeanieMinibossGenericDelegate GruntysDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeanieMinibossGenericDelegate OnTookNonPhasingHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMeanieMinibossArenaRingManager* ArenaRingManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DynamicNumPlayers, meta=(AllowPrivateAccess=true))
    int32 DynamicNumPlayers;
    
public:
    AMeanieMiniboss(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DynamicNumPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnGruntyLandedCallback(AActor* Grunty, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnGruntyDied(AActor* Murderer);
    
    UFUNCTION(BlueprintCallable)
    void OnAlertStateChanged(EAlertState oldAlertState, EAlertState newAlertState);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_GruntyEmitted(AGrunty* LaunchedGrunty);
    
    UFUNCTION(BlueprintCallable)
    void IntroCutsceneStarted();
    
    UFUNCTION(BlueprintCallable)
    void Initialise(AActor* ArenaCentreActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void EmitGrunty(float Angle, float Distance);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Auth_TriggerAdditiveAnim(EMinibossMeanieAdditiveState AdditiveAnim);
    
private:
    UFUNCTION(BlueprintCallable)
    void ArenaManipulationStart();
    

    // Fix for true pure virtual functions not being implemented
};

