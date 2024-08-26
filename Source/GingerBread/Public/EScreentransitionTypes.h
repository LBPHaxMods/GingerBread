#pragma once
#include "CoreMinimal.h"
#include "EScreentransitionTypes.generated.h"

UENUM(BlueprintType)
enum class EScreentransitionTypes : uint8 {
    Horizontal,
    Vertical,
    PaintPour,
    MAX,
};

