#pragma once
#include "CoreMinimal.h"
#include "EWaterTableDirection.h"
#include "WaterTableCallbackData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FWaterTableCallbackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Callee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaterTableDirection Direction;
    
    GINGERBREAD_API FWaterTableCallbackData();
};

