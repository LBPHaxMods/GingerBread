#pragma once
#include "CoreMinimal.h"
#include "ESplineRotationMode.generated.h"

UENUM(BlueprintType)
enum class ESplineRotationMode : uint8 {
    WorldSpace,
    SplineTransform,
};

