#pragma once
#include "CoreMinimal.h"
#include "FallingPlatformLightMaterialPair.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FFallingPlatformLightMaterialPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalLightIntensity;
    
    GINGERBREAD_API FFallingPlatformLightMaterialPair();
};

