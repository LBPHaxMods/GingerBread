#pragma once
#include "CoreMinimal.h"
#include "AdditionalAnimationBlendInfo.generated.h"

USTRUCT(BlueprintType)
struct FAdditionalAnimationBlendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutBlendTime;
    
    GINGERBREAD_API FAdditionalAnimationBlendInfo();
};

