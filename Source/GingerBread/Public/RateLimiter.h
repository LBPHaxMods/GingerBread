#pragma once
#include "CoreMinimal.h"
#include "RateLimiter.generated.h"

USTRUCT(BlueprintType)
struct FRateLimiter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
public:
    GINGERBREAD_API FRateLimiter();
};

