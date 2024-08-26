#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DarkMatterEngineMovable.h"
#include "ESlapBoltState.h"
#include "HitPointsComponentEventReceiver.h"
#include "SlapBoltNetInfo.h"
#include "SlapBoltSlapParameters.h"
#include "PlayerCountActor.h"
#include "SlapBoltScrew.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UCurveFloat;
class UForceFeedbackEffect;
class UHitPointsComponent;
class UInteractionComponent;
class UParticleSystem;
class UPhysicsAudioComponent;
class USceneComponent;
class UStaticMeshComponent;
class UTimelineComponent;

UCLASS(Blueprintable)
class ASlapBoltScrew : public APlayerCountActor, public IHitPointsComponentEventReceiver, public IDarkMatterEngineMovable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ScrewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* MeshInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsComponent* HitPointsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsAudioComponent* PhysicsAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SlapRescrewTimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlapBoltSlapParameters> SlapParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* SlapUnscrewTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SparksParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SpinParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* SlapForceFeedbackEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PopOutAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RewindAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RewindStopAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnscrewedBoltZRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnscrewedBoltHitImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AUTHHandlePosition, meta=(AllowPrivateAccess=true))
    FSlapBoltNetInfo AUTHHandlePosition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetState, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESlapBoltState::Type> AuthState;
    
public:
    ASlapBoltScrew(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnPickups();
    
    UFUNCTION(BlueprintCallable)
    void OnSlapUnscrewTimelineUpdate(const float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void OnSlapUnscrewTimelineFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnScrewSlappedRPC(const float StartBoltHeight, const int32 InAdjustedSlapPowerLevel, const int32 InSlapsReceivedCount, const FVector& InSlapHitLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_AUTHHandlePosition();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnPopoutScrewImpulseRPC(const FVector& InImpulseLocation, const FVector& InImpulseToAdd, const FVector& InAngularImpulseToAdd);
    

    // Fix for true pure virtual functions not being implemented
};

