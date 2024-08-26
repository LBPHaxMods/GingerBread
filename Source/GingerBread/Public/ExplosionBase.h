#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HitPointsModifierComponentEventReceiver.h"
#include "Templates/SubclassOf.h"
#include "ExplosionBase.generated.h"

class AExplosionBase;
class UAkAudioEvent;
class UCameraShake;
class UForceFeedbackAttenuation;
class UForceFeedbackEffect;
class UHitPointsModifierComponent;
class UInteractionComponent;
class UObject;
class UParticleSystem;
class URadialForceComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class AExplosionBase : public AActor, public IHitPointsModifierComponentEventReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* DetectInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadialForceComponent* RadialForceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* HitPointsModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SackboyLaunchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackAttenuation* ForceFeedbackAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> CameraShakeClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CachedInstigator;
    
public:
    AExplosionBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AExplosionBase* SpawnReplicatedExplosionNoFinishSpawn(UObject* WorldContext, TSubclassOf<AExplosionBase> ExplosionClass, const FTransform& SpawnTransform, AActor* InOwner, AActor* DamageInstigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AExplosionBase* SpawnReplicatedExplosion(UObject* WorldContext, TSubclassOf<AExplosionBase> ExplosionClass, const FTransform& SpawnTransform, AActor* InOwner, AActor* DamageInstigator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AExplosionBase* SpawnNonReplicatedExplosion(UObject* WorldContext, TSubclassOf<AExplosionBase> ExplosionClass, const FTransform& SpawnTransform, AActor* InOwner, AActor* DamageInstigator, float Delay);
    

    // Fix for true pure virtual functions not being implemented
};

