#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/NetSerialization.h"
#include "CustomBBKeySelector.h"
#include "EAlertState.h"
#include "EKingFroogleConfigVariant.h"
#include "GingerbreadAICharacter.h"
#include "KingFroogleSuperAttackFallStartDelegate.h"
#include "SuperAttackJumpDelegate.h"
#include "SuperAttackStartDelegate.h"
#include "KingFroogle.generated.h"

class AActor;
class AProogle;
class UAIAttackRangeComponent;
class UAICoordinatedAttackComponent;
class UAkComponent;
class UBoxComponent;
class UCapsuleComponent;
class UHitPointsModifierComponent;
class UInteractionComponent;
class UKingFroogleActionComponent;
class UKingFroogleCantAttackComponent;
class UKingFroogleCommanderComponent;
class UKingFroogleDynamicHitPointsComponent;
class UKingFroogleHitReactionComponent;
class UKingFroogleHopComponent;
class UKingFroogleSpotShadowManagerComponent;
class UKingFroogleStompComponent;
class UKingFroogleSuperAnticipateComponent;
class UKingFroogleTurnToTargetComponent;
class ULookAtComponent;
class UParticleSystemComponent;
class UProogleSuperAttackComponent;
class USpotShadowComponent;

UCLASS(Blueprintable)
class AKingFroogle : public AGingerbreadAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* HitpointsCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SquashDamageBoxCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* FallSpotShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HopKnockbackBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TakeOffVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* HitPointsInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* SquashDamageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* HopKnockbackInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKingFroogleActionComponent* KingFroogleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIAttackRangeComponent* AttackRangeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* HopKnockbackHitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* SquashDamageHitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKingFroogleStompComponent* StompComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKingFroogleHopComponent* HopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKingFroogleCommanderComponent* CommanderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKingFroogleDynamicHitPointsComponent* DynamicHitPointsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKingFroogleTurnToTargetComponent* TurnToTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProogleSuperAttackComponent* ProogleSuperAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAICoordinatedAttackComponent* CoordinatedAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKingFroogleCantAttackComponent* KingFroogleCantAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKingFroogleSuperAnticipateComponent* KingFroogleSuperAnticipationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKingFroogleHitReactionComponent* KingFroogleHitReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULookAtComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKingFroogleSpotShadowManagerComponent* SpotShadowManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkHapticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKingFroogleConfigVariant Variant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AProogle*> RegisteredFroogles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DefaultHitResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InvincibleHitResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector KingFroogleJumpToActorBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector ArenaCentreActorBB;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuperAttackJump SuperAttackJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKingFroogleSuperAttackFallStart SuperAttackFallStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuperAttackStart SuperAttackAboutToStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInvulnerable, meta=(AllowPrivateAccess=true))
    bool Rep_IsInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DynamicNumPlayers, meta=(AllowPrivateAccess=true))
    int32 DynamicNumPlayers;
    
public:
    AKingFroogle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetupLevelLocations(AActor* ArenaCentreActor, AActor* OffScreenLocationActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SetTakeOffVFXEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFroogle(AProogle* Froogle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuperAttackJump_Blueprint(bool IsGoingAway);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnSuperAttackJump(bool IsGoingAway);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInvulnerable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DynamicNumPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnFroogleDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnAlertStateChanged(EAlertState oldAlertState, EAlertState newAlertState);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetPickupLocation(const FVector_NetQuantize100& InPickupLocation);
    
    UFUNCTION(BlueprintCallable)
    void IntroCutsceneStarted();
    
};

