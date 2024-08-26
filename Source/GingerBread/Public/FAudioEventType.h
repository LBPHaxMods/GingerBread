#pragma once
#include "CoreMinimal.h"
#include "FAudioEventType.generated.h"

UENUM(BlueprintType)
enum class FAudioEventType : uint8 {
    IMPACT,
    ROLL,
    SLIDE,
    MAX_COUNT,
};

