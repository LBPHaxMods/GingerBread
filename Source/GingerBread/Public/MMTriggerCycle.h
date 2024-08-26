#pragma once
#include "CoreMinimal.h"
#include "MMTriggerCycle.generated.h"

USTRUCT(BlueprintType)
struct FMMTriggerCycle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CycleLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerAtCycleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerDelay;
    
    GINGERBREAD_API FMMTriggerCycle();
};

