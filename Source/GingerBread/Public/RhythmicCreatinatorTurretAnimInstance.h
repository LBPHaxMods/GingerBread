#pragma once
#include "CoreMinimal.h"
#include "LevelObjectAnimInstance.h"
#include "RhythmicAnimationTimings.h"
#include "RhythmicCreatinatorTurretAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class URhythmicCreatinatorTurretAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmicAnimationTimings IdleAnimationTimings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdlePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterIdleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterChargeState;
    
public:
    URhythmicCreatinatorTurretAnimInstance();

};

