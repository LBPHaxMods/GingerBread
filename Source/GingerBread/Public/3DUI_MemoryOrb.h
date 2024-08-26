#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "3DUI_MemoryOrb.generated.h"

class A3DUI_MemoryOrb;
class UAkComponent;
class UCurveFloat;
class UMaterialInstanceDynamic;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UTexture2D;
class UTimelineComponent;

UCLASS(Blueprintable)
class A3DUI_MemoryOrb : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPulseAnimFinishedDelegate, A3DUI_MemoryOrb*, callingOrb);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHudCollectionFinishedDelegate, A3DUI_MemoryOrb*, callingOrb);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudCollectionFinishedDelegate OnHudCollectionFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPulseAnimFinishedDelegate OnPulseAnimFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCollected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* OrbStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CloudBurstThroughParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AllCollectedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StaticParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* PulseTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* HudCollectionTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CollectCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PulseCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OrbDynamicMaterial;
    
public:
    A3DUI_MemoryOrb(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSoftOrbTexture(TSoftObjectPtr<UTexture2D> textureRef);
    
    UFUNCTION(BlueprintCallable)
    void SetCollected(bool Collected);
    
    UFUNCTION(BlueprintCallable)
    void PlayBurstThroughVFX();
    
    UFUNCTION(BlueprintCallable)
    void PlayAllCollectedVFX();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayPulseUpdate(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayPulseFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayHudCollectionUpdate(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayHudCollectionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnMemoryTextureLoaded();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayPulse();
    
public:
    UFUNCTION(BlueprintCallable)
    void Anim_PlayHudCollection(float minScale);
    
};

