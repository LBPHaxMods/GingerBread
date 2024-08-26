#pragma once
#include "CoreMinimal.h"
#include "EPopshotShootState.generated.h"

UENUM(BlueprintType)
enum class EPopshotShootState : uint8 {
    Invalid,
    NormalShoot,
    KnockbackShoot,
    NumStates,
};

