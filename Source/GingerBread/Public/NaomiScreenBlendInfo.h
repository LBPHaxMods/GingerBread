#pragma once
#include "CoreMinimal.h"
#include "NaomiScreenBlendInfo.generated.h"

USTRUCT(BlueprintType)
struct FNaomiScreenBlendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InBlendTime;
    
    GINGERBREAD_API FNaomiScreenBlendInfo();
};

