#pragma once
#include "CoreMinimal.h"
#include "ESackboyDrivenTargetMode.generated.h"

UENUM(BlueprintType)
enum class ESackboyDrivenTargetMode : uint8 {
    AllPointsOfInterest,
    HighestPrioritySackboy,
    LeadSackboy,
};

