#pragma once
#include "CoreMinimal.h"
#include "PopshotProjectileBounceParams.generated.h"

USTRUCT(BlueprintType)
struct FPopshotProjectileBounceParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRateMultiplier;
    
    GINGERBREAD_API FPopshotProjectileBounceParams();
};

