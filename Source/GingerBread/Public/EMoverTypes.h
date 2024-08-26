#pragma once
#include "CoreMinimal.h"
#include "EMoverTypes.generated.h"

UENUM(BlueprintType)
enum class EMoverTypes : uint8 {
    MotionOnly,
    RotationOnly,
    MotionAndRotation,
};

