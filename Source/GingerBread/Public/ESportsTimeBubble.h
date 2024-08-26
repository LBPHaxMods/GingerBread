#pragma once
#include "CoreMinimal.h"
#include "CollectableBase.h"
#include "ESportsTimeBubble.generated.h"

class AActor;
class UAkAudioEvent;
class UArrowComponent;
class UCameraEffectDataAsset;
class UCollectableHUDMoverComponent;
class UForceFeedbackEffect;
class UParticleSystem;
class UParticleSystemComponent;
class USpotShadowComponent;
class UVertexAnimatedMeshComponent;

UCLASS(Blueprintable)
class AESportsTimeBubble : public ACollectableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVertexAnimatedMeshComponent* VertexAnimatedMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* IdleParticleSysComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectableHUDMoverComponent* HUDMoverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayFromCollectionToHudMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollectionAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollectionGamepadAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CollectionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollectHapticsAudioEventPS5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* CollectForceFeedbackPS4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraEffectDataAsset* CollectionCameraEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CollectionTriggersLevelIridescence;
    
public:
    AESportsTimeBubble(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Reveal();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTimedChallengeManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCollectableHUDMotionComplete(UCollectableHUDMoverComponent* pComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Hide();
    
private:
    UFUNCTION(BlueprintCallable)
    void BeginMoveToHUD();
    
};

