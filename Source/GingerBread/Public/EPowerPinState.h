#pragma once
#include "CoreMinimal.h"
#include "EPowerPinState.generated.h"

UENUM(BlueprintType)
enum class EPowerPinState : uint8 {
    Locked,
    UnlockedNew,
    UnlockedSeen,
};

