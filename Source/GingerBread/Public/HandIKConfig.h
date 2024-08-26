#pragma once
#include "CoreMinimal.h"
#include "HandIKConfig.generated.h"

USTRUCT(BlueprintType)
struct FHandIKConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RayOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandSeparation;
    
    GINGERBREAD_API FHandIKConfig();
};

