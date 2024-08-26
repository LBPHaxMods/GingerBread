#pragma once
#include "CoreMinimal.h"
#include "ActivityWeightData.generated.h"

USTRUCT(BlueprintType)
struct GINGERBREAD_API FActivityWeightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobbleWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobbleWeightBlendTime;
    
    FActivityWeightData();
};

