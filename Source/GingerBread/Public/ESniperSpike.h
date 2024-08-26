#pragma once
#include "CoreMinimal.h"
#include "ESniperSpike.generated.h"

UENUM(BlueprintType)
enum class ESniperSpike : uint8 {
    Invalid,
    TopRight,
    BottomRight,
    TopLeft,
    BottomLeft,
};

