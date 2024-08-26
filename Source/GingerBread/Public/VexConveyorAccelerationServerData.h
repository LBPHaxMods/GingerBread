#pragma once
#include "CoreMinimal.h"
#include "EVexConveyorAccelerationMode.h"
#include "VexConveyorAccelerationServerData.generated.h"

USTRUCT(BlueprintType)
struct FVexConveyorAccelerationServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAccelerationModeTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexConveyorAccelerationMode AccelerationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelerationTimer;
    
    GINGERBREAD_API FVexConveyorAccelerationServerData();
};

