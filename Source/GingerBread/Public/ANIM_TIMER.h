#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ANIM_TIMER.generated.h"

UCLASS(Blueprintable, NonTransient)
class UANIM_TIMER : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimate;
    
    UANIM_TIMER();

};

