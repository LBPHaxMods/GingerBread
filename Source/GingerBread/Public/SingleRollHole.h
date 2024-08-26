#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AllowedToys.h"
#include "ERollHoleEndReason.h"
#include "ERollHoleType.h"
#include "ESackboyActivity.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "EWorldLocation.h"
#include "RollHole.h"
#include "RollHoleHapticsHandler.h"
#include "SackboyDetection.h"
#include "SingleRollHoleWorldMaterials.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "SingleRollHole.generated.h"

class AActor;
class ABoomerangProjectile;
class AGameplayAudioManager;
class ASackboy;
class UAkAudioEvent;
class UAnimMontage;
class UBoxComponent;
class UForceFeedbackEffect;
class UInteractionComponent;
class UParticleSystemComponent;
class UPickupContainerComponent;
class UPrimitiveComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USplineComponent;
class UTriggerActorComponent;

UCLASS(Blueprintable)
class ASingleRollHole : public APlayerCountActor, public ISackboyDetection, public IRollHole, public IWakeSleep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EntranceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EntranceCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* EntranceInteractCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ExitMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ExitCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* ExitInteractCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* MainSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* EntranceParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ExitParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* PickupContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostumeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostumeBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostumeBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsesConstantSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToSearchForFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnappingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTwoWay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEntryAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERollHoleType EntranceHoleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERollHoleType ExitHoleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RollHoleMontageDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RollHoleMontagePortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PortalAnimationBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DoorAnimationBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstEnterSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstExitSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnterSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExitSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToDisableSkMeshTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation MaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, FSingleRollHoleWorldMaterials> MaterialsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FirstEnterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FirstExitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartTravelAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopTravelAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DoorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* PortalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfScoreBubbles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* FirstEnterVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* EnterVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* TravellingVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* FirstExitVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ExitVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayTravellingHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopTravellingHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FirstEnterHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnterHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FirstExitHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExitHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnterGamepadAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExitGamepadAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRollHoleHapticsHandler RollHoleHapticsHandler;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ColliderOffsets[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllowedToys ToySettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitialUse, meta=(AllowPrivateAccess=true))
    bool IsEntranceFirstUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsExitFirstUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayAudioManager* GameplayAudioManager;
    
public:
    ASingleRollHole(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWake();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSleep();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSackboyExitedMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyEnteredMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_InitialUse();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSettingsAvailable(AActor* ManagerActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnExitMontageEnd(UAnimMontage* AnimMontage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnEntranceMontageEnd(UAnimMontage* AnimMontage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCallCSGAudio();
    
private:
    UFUNCTION(BlueprintCallable)
    void DisableSkMeshTick(USkeletalMeshComponent* SKMesh);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CLIENT_RollStart(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 splineIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CLIENT_RollEnd(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 splineIndex, ERollHoleEndReason EndReason);
    
    UFUNCTION(BlueprintCallable)
    void ClearIgnoredSackboy();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    bool OnSackboyWantsToFallThroughMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyWantsToFallThroughMe, return false;);
    
    UFUNCTION()
    void OnSackboyStoppedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails) override PURE_VIRTUAL(OnSackboyStoppedTouchingMe,);
    
    UFUNCTION()
    void OnSackboyStartedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails, const FVector usefulVector, int32 usefulInteger) override PURE_VIRTUAL(OnSackboyStartedTouchingMe,);
    
    UFUNCTION()
    void OnSackboySlappedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 SlapLevel, FVector slapHitLocation, bool isLeftHandSlap) override PURE_VIRTUAL(OnSackboySlappedMe,);
    
    UFUNCTION()
    void OnFishingRodPulledMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& Position, const FVector& Force) override PURE_VIRTUAL(OnFishingRodPulledMe,);
    
    UFUNCTION()
    void OnFishingRodHitMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& Velocity) override PURE_VIRTUAL(OnFishingRodHitMe,);
    
    UFUNCTION()
    void OnFishingRodDetachedFromMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& attach_position) override PURE_VIRTUAL(OnFishingRodDetachedFromMe,);
    
    UFUNCTION()
    void OnFishingRodAttachedToMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& attach_position) override PURE_VIRTUAL(OnFishingRodAttachedToMe,);
    
    UFUNCTION()
    void OnBoomerangHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ABoomerangProjectile* Boomerang, FVector Velocity, int32 charge_level, float boomerang_damage) override PURE_VIRTUAL(OnBoomerangHitMe,);
    
    UFUNCTION()
    void OnBlastersHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& hit_location, const FVector& hit_normal) override PURE_VIRTUAL(OnBlastersHitMe,);
    
    UFUNCTION()
    void OnRollStart(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 splineIndex) override PURE_VIRTUAL(OnRollStart,);
    
    UFUNCTION()
    void OnRollEnd(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 splineIndex, ERollHoleEndReason EndReason) override PURE_VIRTUAL(OnRollEnd,);
    
    UFUNCTION()
    bool HasSplineEnded(FVector Position, FVector nextPos, float Distance, bool isMovingFwd, int32 splineIndex) override PURE_VIRTUAL(HasSplineEnded, return false;);
    
    UFUNCTION()
    FVector GetUpVector(float Distance, bool isMovingFwd, int32 splineIndex) const override PURE_VIRTUAL(GetUpVector, return FVector{};);
    
    UFUNCTION()
    float GetSplineSpeedMultiplier(int32 splineIndex) const override PURE_VIRTUAL(GetSplineSpeedMultiplier, return 0.0f;);
    
    UFUNCTION()
    FTransform GetNextTransform(float Distance, bool isMovingFwd, float Offset, int32 splineIndex) const override PURE_VIRTUAL(GetNextTransform, return FTransform{};);
    
    UFUNCTION()
    FVector GetNextPosition(float Distance, bool isMovingFwd, float Offset, int32 splineIndex) const override PURE_VIRTUAL(GetNextPosition, return FVector{};);
    
    UFUNCTION()
    void GetExitDirections(bool isMovingFwd, FVector& outForward, FVector& outUp, int32 splineIndex) const override PURE_VIRTUAL(GetExitDirections,);
    
    UFUNCTION()
    bool GetAllowZ() const override PURE_VIRTUAL(GetAllowZ, return false;);
    
};

