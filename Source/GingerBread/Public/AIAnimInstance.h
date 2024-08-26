#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EAIDeathType.h"
#include "EAIHitState.h"
#include "AIAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class UAIAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIDeathType DeathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIHitState HitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRateDeviated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRateAbsDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSpeed;
    
    UAIAnimInstance();

    UFUNCTION(BlueprintCallable)
    void Update(const float DeltaTime);
    
};

