#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "HitPointsModifierComponentEventReceiver.h"
#include "OnProjectileBounceDelegate.h"
#include "OnProjectileFinishedDelegate.h"
#include "OnProjectileImpactDamageDelegate.h"
#include "OnProjectileImpactNoDamageDelegate.h"
#include "OnProjectileShootDelegate.h"
#include "PopshotProjectileBounceParams.h"
#include "PopshotProjectile.generated.h"

class UAIProjectileMovementComponent;
class UBoxComponent;
class UHitPointsModifierComponent;
class UInteractionComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USphereComponent;
class USpotShadowComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class APopshotProjectile : public AActor, public IHitPointsModifierComponentEventReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DamageCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* DamageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* HitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIProjectileMovementComponent* AIProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ShotTrailVFX;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileShoot ProjectileShoot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileBounce ProjectileBounce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileImpactDamage ProjectileImpactDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileImpactNoDamage ProjectileImpactNoDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileFinished ProjectileFinished;
    
    APopshotProjectile(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSphereHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpact(const FVector& ImpactPos, bool ImpactWasDamage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Fire(const FVector& StartLocation, const FRotator& StartRotation, const FVector& Velocity, float RotationRate, float GravityScale, const TArray<FPopshotProjectileBounceParams>& InBounceParams);
    

    // Fix for true pure virtual functions not being implemented
};

