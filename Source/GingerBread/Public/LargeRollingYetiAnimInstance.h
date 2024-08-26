#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "LargeRollingYetiAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ULargeRollingYetiAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollAnimPlayRate;
    
    ULargeRollingYetiAnimInstance();

};

