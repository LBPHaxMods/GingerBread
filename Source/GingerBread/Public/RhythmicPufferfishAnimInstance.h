#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_StateMachine.h"
#include "LevelObjectAnimInstance.h"
#include "RhythmicAnimationTimings.h"
#include "RhythmicPufferfishAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class URhythmicPufferfishAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainStateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IdleStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnticipationStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwimmingStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmicAnimationTimings IdleAnimationTimings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmicAnimationTimings AnticipationAnimationTimings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdlePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnticipationStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnticipationPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingIdleStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingIdlePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInIdleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInAnticipationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInSwimmingState;
    
public:
    URhythmicPufferfishAnimInstance();

protected:
    UFUNCTION()
    void OnSwimmingStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex);
    
    UFUNCTION()
    void OnIdleStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex);
    
    UFUNCTION()
    void OnAnticipationStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex);
    
};

