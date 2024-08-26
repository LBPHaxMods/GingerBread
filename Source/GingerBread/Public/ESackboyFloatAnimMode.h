#pragma once
#include "CoreMinimal.h"
#include "ESackboyFloatAnimMode.generated.h"

UENUM(BlueprintType)
enum class ESackboyFloatAnimMode : uint8 {
    Tumble,
    Roll,
    RollOnSpot,
};

