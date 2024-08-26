#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EBlowDartTrapState.h"
#include "BlowDartTrapAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBlowDartTrapAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFiring;
    
public:
    UBlowDartTrapAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetState(EBlowDartTrapState State);
    
};

