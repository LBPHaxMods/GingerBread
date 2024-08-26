#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlatapushVexedAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class UPlatapushVexedAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitReact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HitReactMon;
    
    UPlatapushVexedAnimInstance();

    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnIdleEnd();
    
};

