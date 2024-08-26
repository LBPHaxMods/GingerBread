#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimThread.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimThread : uint8 {
    Idle,
    Attached,
    Push,
    Drop,
    Unequip,
    None = 254,
};

