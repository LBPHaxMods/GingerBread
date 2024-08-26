#pragma once
#include "CoreMinimal.h"
#include "VexFinalFloorHatchLiftServerData.generated.h"

USTRUCT(BlueprintType)
struct FVexFinalFloorHatchLiftServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiftMovementRequestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiftAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLifting;
    
    GINGERBREAD_API FVexFinalFloorHatchLiftServerData();
};

