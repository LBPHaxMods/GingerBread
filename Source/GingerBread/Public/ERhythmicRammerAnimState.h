#pragma once
#include "CoreMinimal.h"
#include "ERhythmicRammerAnimState.generated.h"

UENUM(BlueprintType)
namespace ERhythmicRammerAnimState {
    enum Type {
        Idling,
        Rearing,
        Charging,
        Braking,
        Dying,
    };
}

