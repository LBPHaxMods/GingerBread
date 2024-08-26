#pragma once
#include "CoreMinimal.h"
#include "VexConveyorRotationParameters.generated.h"

USTRUCT(BlueprintType)
struct FVexConveyorRotationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentParametersTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetYaw;
    
    GINGERBREAD_API FVexConveyorRotationParameters();
};

