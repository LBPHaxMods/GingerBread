#pragma once
#include "CoreMinimal.h"
#include "ERollUnderVolumeMode.generated.h"

UENUM(BlueprintType)
enum class ERollUnderVolumeMode : uint8 {
    ConstantDirection,
    Spline,
};

