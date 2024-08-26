#pragma once
#include "CoreMinimal.h"
#include "EThumbnailGeneratorState.generated.h"

UENUM(BlueprintType)
enum class EThumbnailGeneratorState : uint8 {
    Idle,
    EquipCostume,
    Setup,
    Capture,
    Save,
    Count,
};

