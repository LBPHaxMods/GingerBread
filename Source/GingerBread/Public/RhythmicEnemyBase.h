#pragma once

#include "CoreMinimal.h"
#include "HitPointsComponentEventReceiver.h"
#include "RhythmicBeatReceiver.h"
#include "RhythmicEnemyHitReactionSetup.h"
#include "RhythmicEnemyState.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "RhythmicEnemyBase.generated.h"

class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UAttackFlashComponent;
class UBlastersTargetComponent;
class UCapsuleComponent;
class UCraftCutterTargetComponent;
class UGameplayTagComponent;
class UGrappleTargetComponent;
class UHitPointsComponent;
class UPickupContainerComponent;
class UPoIComponent;
class USkeletalMeshComponent;
class USpotShadowComponent;
class UThrowTargetComponent;
class UTriggerActorComponent;

UCLASS(Abstract, Blueprintable)
class ARhythmicEnemyBase : public APlayerCountActor, public IWakeSleep, public IHitPointsComponentEventReceiver, public IRhythmicBeatReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoIComponent* PoIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlastersTargetComponent* BlastersTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCraftCutterTargetComponent* CraftCutterTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrappleTargetComponent* GrappleTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* PickupContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsComponent* HitPointsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttackFlashComponent* AttackFlashComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrowTargetComponent* ThrowTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRhythmicEnemyHitReactionSetup> HitReactionSetups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StandardDamageAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HeadStompDamageAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CraftCutterDamageAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RollingDamageAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnemyState, meta=(AllowPrivateAccess=true))
    FRhythmicEnemyState EnemyState;
    
public:
    ARhythmicEnemyBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostAudioFromDamageTable(const FName DamageTableKey);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemyState();
    
    UFUNCTION(BlueprintCallable)
    void OnDeathSyncPointReached();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetDamageInstigator() const;
    

    // Fix for true pure virtual functions not being implemented
};

