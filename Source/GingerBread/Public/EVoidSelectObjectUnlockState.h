#pragma once
#include "CoreMinimal.h"
#include "EVoidSelectObjectUnlockState.generated.h"

UENUM(BlueprintType)
enum class EVoidSelectObjectUnlockState : uint8 {
    Locked,
    RequiresUnlock,
    Unlocked,
};

