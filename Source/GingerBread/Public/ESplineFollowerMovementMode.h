#pragma once
#include "CoreMinimal.h"
#include "ESplineFollowerMovementMode.generated.h"

UENUM(BlueprintType)
enum class ESplineFollowerMovementMode : uint8 {
    ConstantTime,
    Curve,
};

