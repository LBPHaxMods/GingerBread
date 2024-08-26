#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RollingYetiAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class URollingYetiAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollAnimPlayRate;
    
    URollingYetiAnimInstance();

};

