#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "AllowedToys.h"
#include "ECannonActivationTrigger.h"
#include "ESackboyActivity.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "ETransitionCannonPhase.h"
#include "HitPointsComponentEventReceiver.h"
#include "LevelObject.h"
#include "SackboyDetection.h"
#include "Templates/SubclassOf.h"
#include "TransitionCannonAllSackboysInCannonDelegate.h"
#include "TransitionCannonFireEventDelegate.h"
#include "TransitionCannonFirstSackboyEnteredDelegate.h"
#include "TransitionCannonInputEnabledEventDelegate.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "TransitionCannon.generated.h"

class ABoomerangProjectile;
class ASackboy;
class UAkAudioEvent;
class UCSPHelperComponent;
class UCameraShake;
class UControlScheme;
class UCurveFloat;
class UForceFeedbackEffect;
class UInteractionComponent;
class UPoIComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UTransitionCannonAnimInstance;

UCLASS(Blueprintable, MinimalAPI)
class ATransitionCannon : public APlayerCountActor, public ISackboyDetection, public IHitPointsComponentEventReceiver, public IWakeSleep, public ILevelObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransitionCannonFireEvent OnFireEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransitionCannonFirstSackboyEntered OnFirstSackboyEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransitionCannonAllSackboysInCannon OnAllSackboysInCannon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransitionCannonInputEnabledEvent OnInputEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DebugShowTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShowTrajectoryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DebugSackboyCollisionAtTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SackboyCollisionAtTargetPointTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LaunchSackboysOntoGloopedSurfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllowedToys ToySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionPredictionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CSPLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShowPredictedCollision;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Phase, meta=(AllowPrivateAccess=true))
    ETransitionCannonPhase Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECannonActivationTrigger ActivationTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EstimatedFlyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRotationPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SackboyMovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SackboyMovementCurveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumVerticalAngleForBlendspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMovedIntoPlayspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseArcCollisionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcPeakModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* EnterForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnterHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* PreFireForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PreFireHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> CameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlScheme* CannonControlScheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TargetPoints;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboy> ActivatingSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreFireWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostFireWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GulpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SackboyInviteInCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SackboyPrimaryActivationCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SackboySecondaryActivationCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SackboyInputCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* SackboyInviteInInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* SackboyPrimaryActivationInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* SackboySecondaryActivationInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* SackboyInputInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransitionCannonAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoIComponent* PoIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TargetZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNetworkHostInputOnly;
    
public:
    ATransitionCannon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Phase();
    
private:
    UFUNCTION()
    void OnCSPAction(uint32 Type);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWake();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSleep();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSBCannon(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetPoints(int32 Index);
    

    // Fix for true pure virtual functions not being implemented
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
