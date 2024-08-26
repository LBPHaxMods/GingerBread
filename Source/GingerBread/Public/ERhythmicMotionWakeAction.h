#pragma once
#include "CoreMinimal.h"
#include "ERhythmicMotionWakeAction.generated.h"

UENUM(BlueprintType)
namespace ERhythmicMotionWakeAction {
    enum Type {
        TeleportToPosition,
        InterpolateToPosition,
        WaitUntilNextBeat,
    };
}

