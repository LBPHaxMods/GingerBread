#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESplineFollowerEndOfSplineBehaviour.h"
#include "ESplineFollowerMovementMode.h"
#include "SplineEndPositionReachedDelegateDelegate.h"
#include "SplineEndReachedDelegateDelegate.h"
#include "SplineMovementPausedDelegateDelegate.h"
#include "SplineMovementStartedDelegateDelegate.h"
#include "SplinePointReachedDelegateDelegate.h"
#include "SplineTargedReachedDelegateDelegate.h"
#include "SplineFollowerComponent.generated.h"

class AActor;
class UCSPHelperComponent;
class UCurveFloat;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USplineFollowerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USceneComponent* Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_SplineChanged, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StartingPositionAlongSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StartingTimeAlongSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPositionAlongSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESplineFollowerMovementMode MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ResetPositionAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DelayAtStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DelayAtEndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReversedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartedReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeToTraverseSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* MovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* ReversedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float EndOfSplineCurveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESplineFollowerEndOfSplineBehaviour EndOfSplineBehaviour;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMovementStartedDelegate SplineMovementStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMovementPausedDelegate SplineMovementPaused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineEndReachedDelegate SplineEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineTargedReachedDelegate SplineTargetReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplinePointReachedDelegate SplinePointReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineEndPositionReachedDelegate SplineEndPositionReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector RelativePositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector WorldPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Paused: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 AlignPitchRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 AlignRollRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 AlignYawRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 MatchRotationToMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 SynchronisedMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float VirtualLengthExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Client_IsLateJoin: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bInitialised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 UseCSP: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CSPDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerCurrentPosition, meta=(AllowPrivateAccess=true))
    float Server_CurrentPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Server_PositionTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerDelayUntilTime, meta=(AllowPrivateAccess=true))
    float Server_DelayUntilTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerReversedMovement, meta=(AllowPrivateAccess=true))
    uint8 Server_ReversedMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerStartedReversed, meta=(AllowPrivateAccess=true))
    uint8 Server_StartedReversed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerPaused, meta=(AllowPrivateAccess=true))
    uint8 Server_Paused: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerEnabled, meta=(AllowPrivateAccess=true))
    uint8 Server_Enabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerCurrentTarget, meta=(AllowPrivateAccess=true))
    float Server_CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerTargetStart, meta=(AllowPrivateAccess=true))
    float Server_TargetStart;
    
public:
    USplineFollowerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartTargetTimed(float Distance, float TravelTime, bool Normalised);
    
    UFUNCTION(BlueprintCallable)
    void StartTargetSplinePointTimed(int32 SplinePointIndex, float TravelTime);
    
    UFUNCTION(BlueprintCallable)
    void StartTargetSplinePointDirectionTimed(int32 SplinePointIndex, bool Reverse, float TravelTime);
    
    UFUNCTION(BlueprintCallable)
    void StartTargetSplinePointDirection(int32 SplinePointIndex, bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void StartTargetSplinePoint(int32 SplinePointIndex);
    
    UFUNCTION(BlueprintCallable)
    void StartTargetDirectionTimed(float Distance, bool Reverse, float TravelTime, bool Normalised);
    
    UFUNCTION(BlueprintCallable)
    void StartTargetDirection(float Distance, bool Reverse, bool Normalised);
    
    UFUNCTION(BlueprintCallable)
    void StartTarget(float Distance, bool Normalised);
    
    UFUNCTION(BlueprintCallable)
    void StartIncrementalTimed(float Distance, float TravelTime, bool Normalised);
    
    UFUNCTION(BlueprintCallable)
    void StartIncremental(float Distance, bool Normalised);
    
    UFUNCTION(BlueprintCallable)
    void StartDirectionTimed(bool Reverse, float TravelTime);
    
    UFUNCTION(BlueprintCallable)
    void StartDirection(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    bool SetupWithActor(AActor* NewSubjectActor, USplineComponent* newspline, bool StartAutomatically);
    
    UFUNCTION(BlueprintCallable)
    bool SetUp(USceneComponent* NewSubject, USplineComponent* newspline, bool StartAutomatically);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeAlongSpline(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetNormalisedTimeAlongSpline(float normal_time);
    
    UFUNCTION(BlueprintCallable)
    void SetNormalisedDistanceAlongSpline(float normal_distance);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceAlongSpline(float Distance, bool ForceLocally);
    
    UFUNCTION(BlueprintCallable)
    void RESET();
    
    UFUNCTION(BlueprintCallable)
    void PAUSE();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnStartBroadcastRPC(bool bForward);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SplineChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerTargetStart();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerStartedReversed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerReversedMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerPaused();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerDelayUntilTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerCurrentTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerCurrentPosition();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineLength(bool WithVirtualExtension) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeSpline(USplineComponent* newspline, bool StartAutomatically);
    
};

