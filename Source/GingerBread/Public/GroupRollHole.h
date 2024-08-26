#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EGroupRollHoleState.h"
#include "EPlayerJoinDirection.h"
#include "ERollHoleEndReason.h"
#include "ESackboyActivity.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "EWorldLocation.h"
#include "GingerbreadPlayerId.h"
#include "GroupRollHoleEnterEventDelegate.h"
#include "GroupRollHoleEventDelegate.h"
#include "GroupRollHoleExitEventDelegate.h"
#include "GroupRollHoleWorldMaterials.h"
#include "RollHole.h"
#include "RollHoleHapticsHandler.h"
#include "SackboyDetection.h"
#include "SplineIndexMapping.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "GroupRollHole.generated.h"

class AActor;
class ABoomerangProjectile;
class AGroupRollHoleExit;
class ASackboy;
class UAkAudioEvent;
class UAnimMontage;
class UBoxComponent;
class UCSPHelperComponent;
class UGameplayTagComponent;
class UInteractionComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class USplineComponent;
class UStaticMeshComponent;
class UTriggerActorComponent;

UCLASS(Blueprintable)
class AGroupRollHole : public APlayerCountActor, public ISackboyDetection, public IRollHole, public IWakeSleep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupRollHoleEvent FirstSackboyEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupRollHoleEnterEvent SackboyEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupRollHoleEvent AllSackboysEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupRollHoleEvent AllSackboysExited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupRollHoleExitEvent SackboyExited;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EntranceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EntranceCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* EntranceInteractCollider;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponents[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BackgroundMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PlayerOneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PlayerTwoMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PlayerThreeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PlayerFourMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagMeshOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagMeshTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagMeshThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagMeshFour;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AGroupRollHoleExit* Exits[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntranceTangentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsesConstantSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SackboyGatherPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToSearchForFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnappingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEntryAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SackboyYankHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostumeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostumeBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostumeBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation MaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, FGroupRollHoleWorldMaterials> MaterialsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RollHoleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnterSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToDisableSkMeshTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartTravelAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopTravelAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnterHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExitHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnterGamepadAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExitGamepadAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartTravelLoopHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopTravelLoopHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRollHoleHapticsHandler RollHoleHapticsHandler;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EGroupRollHoleState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Initial, meta=(AllowPrivateAccess=true))
    bool bInitialEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumOfPlayers, meta=(AllowPrivateAccess=true))
    uint8 NumOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSplineIndexMapping> SplineIndexMappings;
    
public:
    AGroupRollHole(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StartRollingDelayed();
    
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
    void OnRep_NumOfPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Initial();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& ID, bool forced);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSettingsAvailable(AActor* ManagerActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEntranceMontageEnd(UAnimMontage* AnimMontage, bool bInterrupted);
    
private:
    UFUNCTION()
    void OnCSPAction(uint32 Type);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollectScoreBubble();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCallCSGAudio();
    
    UFUNCTION(BlueprintCallable)
    void DisableSkMeshTick();
    

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

