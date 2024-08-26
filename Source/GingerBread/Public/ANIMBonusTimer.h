#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ANIMBonusTimer.generated.h"

// Delegate declaration
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUANIMBonusTimerDelegate);

UCLASS(Blueprintable, NonTransient)
class UANIMBonusTimer : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMovingToCentre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetIntro;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUANIMBonusTimerDelegate OnMoveToCentreStart;
    
    UANIMBonusTimer();

};

