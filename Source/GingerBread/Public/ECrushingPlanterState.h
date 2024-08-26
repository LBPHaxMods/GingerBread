#pragma once
#include "CoreMinimal.h"
#include "ECrushingPlanterState.generated.h"

UENUM(BlueprintType)
enum class ECrushingPlanterState : uint8 {
    Raising,
    Raised,
    Lowering,
    Lowered,
};

