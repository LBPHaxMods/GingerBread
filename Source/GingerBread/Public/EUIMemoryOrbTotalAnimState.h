#pragma once
#include "CoreMinimal.h"
#include "EUIMemoryOrbTotalAnimState.generated.h"

UENUM(BlueprintType)
enum class EUIMemoryOrbTotalAnimState : uint8 {
    None,
    Incrementing,
    WaitingCooldown,
    IncrementingCooldown,
};

