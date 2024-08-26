#pragma once
#include "CoreMinimal.h"
#include "MMCachedCurveSamples.generated.h"

USTRUCT(BlueprintType)
struct FMMCachedCurveSamples {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSamples;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveCache[256];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveDurationRecip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveFName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumReferences;
    
    GINGERBREAD_API FMMCachedCurveSamples();
};

