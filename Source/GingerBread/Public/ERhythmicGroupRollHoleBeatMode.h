#pragma once
#include "CoreMinimal.h"
#include "ERhythmicGroupRollHoleBeatMode.generated.h"

UENUM(BlueprintType)
enum class ERhythmicGroupRollHoleBeatMode : uint8 {
    ExitBeat,
    RollBeat,
    RollExitBeat,
};

