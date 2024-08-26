#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ANIM_TimerA_CR_SK_Skeleton.generated.h"

// Delegate declaration
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FANIM_TimerA_CR_SK_SkeletonDelegate);

UCLASS(Blueprintable, NonTransient)
class UANIM_TimerA_CR_SK_Skeleton : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InstantOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreviousIsInCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IntroIsEnding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float outroPlayRate;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FANIM_TimerA_CR_SK_SkeletonDelegate OnTimerIntroStarted;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FANIM_TimerA_CR_SK_SkeletonDelegate OnTimerOutroStarted;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FANIM_TimerA_CR_SK_SkeletonDelegate OnCornerMoveStarted;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FANIM_TimerA_CR_SK_SkeletonDelegate OnTimerIntroEnding;
    
    UANIM_TimerA_CR_SK_Skeleton();

};

