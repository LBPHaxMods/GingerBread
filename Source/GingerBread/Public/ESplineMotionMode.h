#pragma once
#include "CoreMinimal.h"
#include "ESplineMotionMode.generated.h"

UENUM(BlueprintType)
enum class ESplineMotionMode : uint8 {
    LockToSpline,
    AllowTangentialMotion,
};

