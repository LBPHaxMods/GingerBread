#pragma once
#include "CoreMinimal.h"
#include "ERotationSpeedMode.generated.h"

UENUM(BlueprintType)
enum class ERotationSpeedMode : uint8 {
    Constant,
    Curve,
};

