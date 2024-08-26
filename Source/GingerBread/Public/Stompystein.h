#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CustomBBKeySelector.h"
#include "EAlertState.h"
#include "EStompysteinConfigVariant.h"
#include "EStompysteinPhase.h"
#include "GingerbreadAICharacter.h"
#include "HitPointsModifierComponentEventReceiver.h"
#include "StompySpinDamageAppliedSignatureDelegate.h"
#include "StompysteinPhaseChangeDelegate.h"
#include "StompysteinSimpleSignatureDelegate.h"
#include "Stompystein.generated.h"

class AActor;
class AStompysteinPylonController;
class UAkComponent;
class UBoxComponent;
class UHitPointsModifierComponent;
class UInteractionComponent;
class UParticleSystem;
class UStaticMeshComponent;
class UStompyChaseComponent;
class UStompySpaceLinkComponent;
class UStompysteinActionComponent;
class UStompysteinCanAttackComponent;
class UStompysteinDynamicHitPointsComponent;
class UStompysteinPhaseComponent;
class UStompysteinSpinComponent;

UCLASS(Blueprintable)
class AStompystein : public AGingerbreadAICharacter, public IHitPointsModifierComponentEventReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HitpointsCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* HitPointsInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HeadDamageAuraCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* HeadDamageAuraInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SpinHitCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStompysteinActionComponent* StompysteinActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStompySpaceLinkComponent* LinkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* DamageAuraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStompysteinDynamicHitPointsComponent* DynamicHitPointsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStompysteinSpinComponent* SpinComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStompyChaseComponent* ChaseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStompysteinCanAttackComponent* CanAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStompysteinPhaseComponent* PhaseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkHapticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStompysteinConfigVariant StompysteinVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DefaultHitResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SpinningHitResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BlasterProjectileDestroyVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStompysteinPylonController* PylonController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector ArenaCentreActorBB;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStompySpinDamageAppliedSignature OnSpinDamageApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStompysteinPhaseChange OnPhaseChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStompysteinSimpleSignature OnStompysteinSpinStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStompysteinSimpleSignature OnStompysteinSpinEnded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepDynamicNumPlayers, meta=(AllowPrivateAccess=true))
    int32 DynamicNumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepSpinStarted, meta=(AllowPrivateAccess=true))
    bool SpinStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepHealthBarEnabled, meta=(AllowPrivateAccess=true))
    bool HealthBarEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepHealthBarFill, meta=(AllowPrivateAccess=true))
    float HealthBarFill;
    
public:
    AStompystein(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRepSpinStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRepHealthBarFill();
    
    UFUNCTION(BlueprintCallable)
    void OnRepHealthBarEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRepDynamicNumPlayers();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthBarEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthBarDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthBarChanged(float NewHealthBarFill);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAlertStateChanged(EAlertState oldAlertState, EAlertState newAlertState);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialise(AActor* ArenaCentreActor, AStompysteinPylonController* InPylonController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthBarFill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStompysteinPhase GetCurrentPhase() const;
    

    // Fix for true pure virtual functions not being implemented
};

