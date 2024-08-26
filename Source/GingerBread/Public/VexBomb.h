#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Carryable.h"
#include "ECarryDropReason.h"
#include "EVexBombType.h"
#include "Templates/SubclassOf.h"
#include "VexProjectile.h"
#include "VexBomb.generated.h"

class AActor;
class ASackboy;
class AVexAttackExplosion;
class UAkComponent;
class UGameplayTagComponent;
class UInteractionComponent;
class UPhysicsAudioComponent;
class UPrimitiveComponent;
class USphereComponent;
class USpotShadowComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AVexBomb : public AVexProjectile, public ICarryable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* SphereInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AKVexBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsAudioComponent* PhysicsAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EVexBombType BombType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeFlickerFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeFlickerFastBeforeWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeAfterWarningBeforeBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeAfterDroppedToExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitRollerImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandedLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVexAttackExplosion> ExplosionActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreBubblesToSpawnOnDamagedBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScoreBubblesSpawnVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ConveyorCheckerActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnConveyorInitialXSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnConveyorInitialYSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnConveyorIdealXSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnConveyorTimeToLerpToZeroVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnConveyorTimeToLerpToIdealSpeedFromZero;
    
    AVexBomb(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TogglePhysics(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopSackboyWarningEffects(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySackboyWarningEffects(ASackboy* Sackboy);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSphereCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnSphereCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnSphereCollisionBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLand(const FVector& LandLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExploded(bool HitBoss);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBombThrownByVex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBombExplosionWarning();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ShouldWaitBeforePickup() override PURE_VIRTUAL(ShouldWaitBeforePickup, return false;);
    
    UFUNCTION()
    void OnThrown(ASackboy* ThrownBy) override PURE_VIRTUAL(OnThrown,);
    
    UFUNCTION()
    void OnSackboyDeath(ASackboy* DeadSackboy) override PURE_VIRTUAL(OnSackboyDeath,);
    
    UFUNCTION()
    void OnPlace(ASackboy* PlacedBy) override PURE_VIRTUAL(OnPlace,);
    
    UFUNCTION()
    void OnPickup(ASackboy* PickedUpBy) override PURE_VIRTUAL(OnPickup,);
    
    UFUNCTION()
    void OnDrop(ASackboy* DroppedBy, ECarryDropReason DropReason) override PURE_VIRTUAL(OnDrop,);
    
    UFUNCTION()
    UPrimitiveComponent* GetCarryPrimitive() override PURE_VIRTUAL(GetCarryPrimitive, return NULL;);
    
};

