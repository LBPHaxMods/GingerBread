#pragma once
#include "CoreMinimal.h"
#include "EGatedLockState.generated.h"

UENUM(BlueprintType)
enum class EGatedLockState : uint8 {
    Locked,
    Unlocked,
};

