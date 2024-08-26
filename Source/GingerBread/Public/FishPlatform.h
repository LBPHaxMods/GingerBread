#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFishPlatformAction.h"
#include "ESackboyActivity.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "FishPlatformState.h"
#include "FishPlatformStop.h"
#include "IndividualFish.h"
#include "LevelObject.h"
#include "OnFishPlatformActionChangedDelegate.h"
#include "SackboyDetection.h"
#include "Templates/SubclassOf.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "FishPlatform.generated.h"

class ABoomerangProjectile;
class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UCSPHelperComponent;
class UCurveFloat;
class UFishPlatformAnimInstance;
class UForceFeedbackEffect;
class UInteractionComponent;
class UPhysicalMaterial;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMesh;
class USplineComponent;
class USplineFollowerComponent;
class UTimelineComponent;
class UTriggerActorComponent;

UCLASS(Abstract, Blueprintable)
class AFishPlatform : public APlayerCountActor, public IWakeSleep, public ILevelObject, public ISackboyDetection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FishRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineFollowerComponent* SplineFollowerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* SwimmingAnimationTimelineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFishPlatformStop> Stops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCircularLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IndividualFishExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumIndividualFishZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumIndividualFishZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignalingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FishSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFishPlatformAnimInstance> FishAnimInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SignalingAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* SignalingForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlaySignalingHapticsEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopSignalingHapticsEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayMovementAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMovementAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SwimmingAnimationAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SwimmingAnimationSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SwimmingAnimationPushApartCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SwimmingAnimationForceRotationCurve;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFishPlatformActionChanged OnActionChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIndividualFish> IndividualFishList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedState, meta=(AllowPrivateAccess=true))
    FFishPlatformState ReplicatedState;
    
public:
    AFishPlatform(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnSwimmingAnimationTimelinePostUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnSwimmingAnimationSpeedUpdate(float speedAlpha);
    
    UFUNCTION(BlueprintCallable)
    void OnSwimmingAnimationPushApartUpdate(float PushApartAlpha);
    
    UFUNCTION(BlueprintCallable)
    void OnSwimmingAnimationForceRotationUpdate(float ForceRotationAlpha);
    
    UFUNCTION(BlueprintCallable)
    void OnSwimmingAnimationAngleUpdate(float AngleAlpha);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedState();
    
    UFUNCTION()
    void OnCSPAction(uint32 ActionAsInteger);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetStopIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStopIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFishPlatformAction GetCurrentAction() const;
    
    UFUNCTION(BlueprintCallable)
    void CopyProperties(USplineComponent* InSpline, const TArray<FFishPlatformStop>& InStops, bool InUseCircularLoop, int32 InLength, int32 InWidth, bool InStartsActive, float InStartingDelay);
    
private:
    UFUNCTION(BlueprintCallable)
    void AUTH_EnterWaitingActionWithCSP();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_EnterSignalingActionWithCSP();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_EnterMovingActionWithCSP();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_EnterAsleepActionWithCSP();
    

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
    void OnSackboyExitedMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) override PURE_VIRTUAL(OnSackboyExitedMeInteract,);
    
    UFUNCTION()
    void OnSackboyExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyExitedMe,);
    
    UFUNCTION()
    void OnSackboyEnteredMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) override PURE_VIRTUAL(OnSackboyEnteredMeInteract,);
    
    UFUNCTION()
    void OnSackboyEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyEnteredMe,);
    
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
    
};

