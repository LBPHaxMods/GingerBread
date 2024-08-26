#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ERotationMode.h"
#include "ERotationSpeedMode.h"
#include "EndRotationReachedDelegateDelegate.h"
#include "RotationStartedDelegateDelegate.h"
#include "RotatorComponent.generated.h"

class UCSPHelperComponent;
class UCurveFloat;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URotatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USceneComponent* Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector PivotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator StartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator EndRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ObjectIsSymmetricalAroundRotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StartingAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StartOfRotationCurveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ForceShortestRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Paused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERotationMode RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERotationSpeedMode SpeedMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ResetRotationAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeToCompleteRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DelayAtStartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DelayAtEndRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReversedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartedReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* ReversedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool UseSingleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float EndOfRotationCurveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeScale;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndRotationReachedDelegate RotationEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndRotationReachedDelegate RotationTargetReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotationStartedDelegate RotationStarted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Initialised, meta=(AllowPrivateAccess=true))
    bool bInitialised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 UseCSP: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CSPDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerCurrentRotation, meta=(AllowPrivateAccess=true))
    float Server_CurrentRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Server_RotationTimestamp;
    
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
    URotatorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartTargetDirection(float Alpha, bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void StartTarget(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void StartIncremental(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void StartDirection(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    bool SetUp(USceneComponent* NewSubject, bool StartAutomatically);
    
    UFUNCTION(BlueprintCallable)
    void SetNormalisedInterpolationTime(float normal_time);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationTime(float Time, bool ForceLocally);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RESET();
    
    UFUNCTION(BlueprintCallable)
    void PAUSE();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnStartBroadcastRPC(bool bForward);
    
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
    void OnRep_ServerCurrentRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Initialised();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRotating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAlpha() const;
    
};

