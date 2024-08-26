#pragma once
#include "CoreMinimal.h"
#include "EMinibossMeanieSpinAndShootState.generated.h"

UENUM(BlueprintType)
enum class EMinibossMeanieSpinAndShootState : uint8 {
    Invalid,
    Idle,
    ShootLeft,
    ShootRight,
    ShortLeft,
    ShortRight,
    Taunt,
};

