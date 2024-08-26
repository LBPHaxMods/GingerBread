#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Collectable.h"
#include "EHealthPickupType.h"
#include "FloatyBubbleEventReceiver.h"
#include "OnBounceStartDelegate.h"
#include "PickupContainerSpawnable.h"
#include "Position_Net.h"
#include "Templates/SubclassOf.h"
#include "TreasureItem.h"
#include "WakeSleep.h"
#include "HealthCapsule.generated.h"

class ASackboy;
class UAkAudioEvent;
class UParticleSystem;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHealthCapsule : public AActor, public ICollectable, public IWakeSleep, public IPickupContainerSpawnable, public IFloatyBubbleEventReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHealthPickupType> HealthPickupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartAwake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CapsuleSoundTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LookAtCameraTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PickupVfxName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestrictRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointsToAward;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBounceStart StartBouncing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BounceMovementRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BounceAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickupAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PickupBPVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PickupParticleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CastShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoCollectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoCollectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PhysicalCollisionPosition, meta=(AllowPrivateAccess=true))
    FPosition_Net AUTHPhysicalCollisionPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AUTHSleeping, meta=(AllowPrivateAccess=true))
    bool AUTHSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AUTHAUTHDestoyCalled, meta=(AllowPrivateAccess=true))
    bool AUTHDestoyCalled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsInBubble;
    
public:
    AHealthCapsule(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopMoving();
    
    UFUNCTION(BlueprintCallable)
    void StartMoving();
    
private:
    UFUNCTION(BlueprintCallable)
    void RotateHealthPickup();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayHealthPickupBounce();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayCollectionVFXSFX(AActor* receiver);
    
private:
    UFUNCTION(BlueprintCallable)
    void PhyCollOnComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void PhyCollOnComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void PhyCollOnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWake();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSleep();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PhysicalCollisionPosition();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AUTHSleeping();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AUTHAUTHDestoyCalled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFirstWake();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnExitTrackerRange(int32 Index, ASackboy* Sack);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterTrackerRange(int32 Index, ASackboy* Sack);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDroppedBySackboy(ASackboy* OriginalSackboy, const FVector& LaunchVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollectionStarted(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnCollected(AActor* CollectingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTreasureItem GetDataType();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CompleteCollection();
    
private:
    UFUNCTION(BlueprintCallable)
    void CapsuleSoundTick();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CancelCollection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBePickedUp(AActor* CollectingActor);
    
    UFUNCTION(BlueprintCallable)
    void AwardScore(ASackboy* Sack);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCapsule();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool SupportsClientCollectionCSP() override PURE_VIRTUAL(SupportsClientCollectionCSP, return false;);
    
    UFUNCTION()
    void OnClientCollectionCSP(AActor* CollectingActor) override PURE_VIRTUAL(OnClientCollectionCSP,);
    
};

