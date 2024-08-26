#pragma once
#include "CoreMinimal.h"
#include "ECorridorRestrictionDirection.generated.h"

UENUM(BlueprintType)
enum class ECorridorRestrictionDirection : uint8 {
    BothDirections,
    Positive,
    Negative,
};

