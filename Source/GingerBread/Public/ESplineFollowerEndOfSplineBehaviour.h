#pragma once
#include "CoreMinimal.h"
#include "ESplineFollowerEndOfSplineBehaviour.generated.h"

UENUM(BlueprintType)
enum class ESplineFollowerEndOfSplineBehaviour : uint8 {
    StopAtEnd,
    RestartAtEnd,
    ReverseAtEnd,
    StopAfterReversed,
};

