#pragma once
#include "CoreMinimal.h"
#include "SpikeyVineInfo.generated.h"

class ASpikeyVineSingle;

USTRUCT(BlueprintType)
struct FSpikeyVineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpikeyVineSingle* SpikeyVine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTarget;
    
    GINGERBREAD_API FSpikeyVineInfo();
};

