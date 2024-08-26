#pragma once
#include "CoreMinimal.h"
#include "EVolatileRollPhase.generated.h"

UENUM(BlueprintType)
enum class EVolatileRollPhase : uint8 {
    Standard,
    ExtraDamage,
    Critical,
};

