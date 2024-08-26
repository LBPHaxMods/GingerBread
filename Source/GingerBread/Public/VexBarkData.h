#pragma once
#include "CoreMinimal.h"
#include "EVexBarkReason.h"
#include "VexBarkReasonData.h"
#include "VexBarkData.generated.h"

USTRUCT(BlueprintType)
struct FVexBarkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVexBarkReason, FVexBarkReasonData> BarkData;
    
    GINGERBREAD_API FVexBarkData();
};

