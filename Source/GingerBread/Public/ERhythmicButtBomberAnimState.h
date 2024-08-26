#pragma once
#include "CoreMinimal.h"
#include "ERhythmicButtBomberAnimState.generated.h"

UENUM(BlueprintType)
enum class ERhythmicButtBomberAnimState : uint8 {
    Idle,
    Anticipating,
    Falling,
    Returning,
    Dying,
    Max,
};

