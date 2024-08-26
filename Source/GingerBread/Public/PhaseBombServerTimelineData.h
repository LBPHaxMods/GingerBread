#pragma once
#include "CoreMinimal.h"
#include "EPhaseBombTimelinePlayDirection.h"
#include "PhaseBombServerTimelineData.generated.h"

USTRUCT(BlueprintType)
struct FPhaseBombServerTimelineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Position;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhaseBombTimelinePlayDirection Direction;
    
    GINGERBREAD_API FPhaseBombServerTimelineData();
};

