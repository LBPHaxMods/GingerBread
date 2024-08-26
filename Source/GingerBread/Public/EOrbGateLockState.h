#pragma once
#include "CoreMinimal.h"
#include "EOrbGateLockState.generated.h"

UENUM(BlueprintType)
enum class EOrbGateLockState : uint8 {
    Locked,
    Intermediate,
    Unlocked,
};

