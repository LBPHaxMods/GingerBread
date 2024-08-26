#pragma once
#include "CoreMinimal.h"
#include "VexFinalFloorHatchOpenServerData.generated.h"

USTRUCT(BlueprintType)
struct FVexFinalFloorHatchOpenServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenMovementRequestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpening;
    
    GINGERBREAD_API FVexFinalFloorHatchOpenServerData();
};

