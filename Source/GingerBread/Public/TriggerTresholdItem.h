#pragma once
#include "CoreMinimal.h"
#include "TriggerTresholdItem.generated.h"

USTRUCT(BlueprintType)
struct FTriggerTresholdItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerReleaseThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerPressThreshold;
    
    GINGERBREAD_API FTriggerTresholdItem();
};

