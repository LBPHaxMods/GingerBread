#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DarkMatterEngineMovable.h"
#include "HitPointsModifierComponentEventReceiver.h"
#include "LevelObject.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "ESportsPhysicsSpikeyRoller.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;
class UAudioSplineComponent;
class UCSPHelperComponent;
class UCurveFloat;
class UCurveVector;
class UGameplayTagComponent;
class UHitPointsModifierComponent;
class UInstancedStaticMeshComponent;
class UInteractionComponent;
class UPhysicalMaterial;
class UPhysicsAudioComponent;
class UPhysicsConstraintComponent;
class USplineComponent;
class USpotShadowComponent;
class UStaticMeshComponent;
class UTimelineComponent;
class UTriggerActorComponent;

UCLASS(Blueprintable)
class AESportsPhysicsSpikeyRoller : public APlayerCountActor, public IWakeSleep, public ILevelObject, public IDarkMatterEngineMovable, public IHitPointsModifierComponentEventReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RootMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Cylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EndMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* SpikeyMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* EndMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* PhysicsConstraint2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* HitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* Ak_PhysicsSpikeyRoller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* AudioSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioSplineComponent* AudioSplineComponent_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioSplineComponent* AudioSplineComponent_Impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* ScaleUpTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsAudioComponent* PhysicsAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RollingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanRollBothWays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bScaleUpOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ScaleUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StartScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector StartVectorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector StartVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool SpawnedAtRuntime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpikeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float kMaxLinVelDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float kMaxAngVelDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* TimelineVectorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RollerLoopStartAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RollerLoopStopAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RollerImpactStartAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RollerImpactStopAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* ZeroSpeedPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* NonZeroSpeedPhysicalMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveChanged, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnabledChanged, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
public:
    AESportsPhysicsSpikeyRoller(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void Trigger_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void OnWake_Implementation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpikeScaleVectorTimelineUpdated(const FVector vAlpha);
    
    UFUNCTION(BlueprintCallable)
    void OnSpikeScaleTimelineUpdated(const float Alpha);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSleep_Implementation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EnabledChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveChanged();
    
    UFUNCTION()
    void OnCSPActionEvent(uint32 Action);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyedInGame(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void EDITOR_SetupFromBlutility(const float _length, const float _rollingSpeed, const bool _canRollBothWays, const bool _scaleUpOnSpawn, const float _startScale, const float _scaleUpTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Deactivate_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void Activate_Implementation(bool bAutoTrigger);
    

    // Fix for true pure virtual functions not being implemented
};

