#pragma once
#include "CoreMinimal.h"
#include "ESniperNeedleSlot.generated.h"

UENUM(BlueprintType)
enum class ESniperNeedleSlot : uint8 {
    TopRight,
    TopLeft,
    BottomRight,
    BottomLeft,
    Invalid,
    Count = Invalid,
};

