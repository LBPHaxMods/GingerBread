#pragma once
#include "CoreMinimal.h"
#include "CollectableBase.h"
#include "MultiplierBubble.generated.h"

class UAkAudioEvent;
class UCameraEffectDataAsset;
class UCollectableFaceScreenMoverComponent;
class UCollectableHUDMoverComponent;
class UCollectablePickupMoverComponent;
class UForceFeedbackEffect;
class UParticleSystem;
class UParticleSystemComponent;
class USpotShadowComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class AMultiplierBubble : public ACollectableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* CollectedForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollectedForceFeedbackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollectedGamepadAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollectedHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollectedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SwirlySmokeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* IdleEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PickupEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraEffectDataAsset* CameraEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectableFaceScreenMoverComponent* CollectableFaceScreenMover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectableHUDMoverComponent* CollectableHUDMover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectablePickupMoverComponent* CollectablePickupMover;
    
public:
    AMultiplierBubble(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RunHUDMovementLogic();
    
    UFUNCTION(BlueprintCallable)
    void OnOrbMovementEnded(UCollectableHUDMoverComponent* mover);
    
    UFUNCTION(BlueprintCallable)
    void OnCollectableHUDMotionLooksComplete();
    
};

