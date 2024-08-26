#pragma once
#include "CoreMinimal.h"
#include "ENaomiLaserAnimState.generated.h"

UENUM(BlueprintType)
enum class ENaomiLaserAnimState : uint8 {
    Invalid,
    Unfold,
    Shoot,
    Fold,
};

