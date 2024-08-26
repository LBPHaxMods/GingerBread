#pragma once
#include "CoreMinimal.h"
#include "EZoneLockedCriteria.generated.h"

UENUM(BlueprintType)
enum class EZoneLockedCriteria : uint8 {
    InsufficientOrbs,
    UnlockPriorCoreLevels,
    UnlockPrecedingCoreLevel,
};

