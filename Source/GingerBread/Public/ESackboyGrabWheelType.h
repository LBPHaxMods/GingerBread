#pragma once
#include "CoreMinimal.h"
#include "ESackboyGrabWheelType.generated.h"

UENUM(BlueprintType)
enum class ESackboyGrabWheelType : uint8 {
    FlatWheel,
    SlowWheel,
    FastWheel,
    FastWheelReversed,
};

