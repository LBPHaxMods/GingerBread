#pragma once
#include "CoreMinimal.h"
#include "ERhythmicGroupRollHoleState.generated.h"

UENUM(BlueprintType)
enum class ERhythmicGroupRollHoleState : uint8 {
    Idle,
    Yanking,
    Holding,
    Rolling,
};

