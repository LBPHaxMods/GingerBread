#pragma once
#include "CoreMinimal.h"
#include "EBubbleAxis.generated.h"

UENUM(BlueprintType)
enum class EBubbleAxis : uint8 {
    Forwards,
    Backwards,
    Left,
    Right,
    Count,
};

