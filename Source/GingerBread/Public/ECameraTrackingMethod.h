#pragma once
#include "CoreMinimal.h"
#include "ECameraTrackingMethod.generated.h"

UENUM(BlueprintType)
enum class ECameraTrackingMethod : uint8 {
    Manual,
    FocusPoint,
    Lead,
    All,
};

