#pragma once
#include "CoreMinimal.h"
#include "ERotationMode.generated.h"

UENUM(BlueprintType)
enum class ERotationMode : uint8 {
    OneTimeRotation,
    Oscillating,
    Repeat,
    Continuous,
    StopAfterOscillated,
};

