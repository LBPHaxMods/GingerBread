#pragma once
#include "CoreMinimal.h"
#include "VexConveyorDistanceServerData.generated.h"

USTRUCT(BlueprintType)
struct FVexConveyorDistanceServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDistance;
    
    GINGERBREAD_API FVexConveyorDistanceServerData();
};

