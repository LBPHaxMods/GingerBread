#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ELifePickupAnimEntry.h"
#include "BigLifePickupAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBigLifePickupAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Fallen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Collected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELifePickupAnimEntry LifePickupEntry;
    
    UBigLifePickupAnimInstance();

};

