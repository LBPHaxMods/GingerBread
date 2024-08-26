#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "LevelObjectAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ULevelObjectAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    ULevelObjectAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    bool ReTriggerCurrentAnimation(FName MachineName, FName StateName, float NewTime);
    
};

