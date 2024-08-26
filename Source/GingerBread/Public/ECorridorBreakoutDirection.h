#pragma once
#include "CoreMinimal.h"
#include "ECorridorBreakoutDirection.generated.h"

UENUM(BlueprintType)
enum class ECorridorBreakoutDirection : uint8 {
    NoBreakout,
    Positive,
    Negative,
};

