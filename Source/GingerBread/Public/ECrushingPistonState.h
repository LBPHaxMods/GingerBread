#pragma once
#include "CoreMinimal.h"
#include "ECrushingPistonState.generated.h"

UENUM(BlueprintType)
enum class ECrushingPistonState : uint8 {
    Extending,
    Extended,
    Retracting,
    Retracted,
};

