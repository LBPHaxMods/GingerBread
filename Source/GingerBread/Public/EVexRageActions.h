#pragma once
#include "CoreMinimal.h"
#include "EVexRageActions.generated.h"

UENUM(BlueprintType)
enum class EVexRageActions : uint8 {
    FastReverse,
    FastForward,
    RotateClockwise,
    RotateCounterClockwise,
};

