#pragma once
#include "CoreMinimal.h"
#include "EVexFinalFight2ArenaDistanceState.generated.h"

UENUM(BlueprintType)
enum class EVexFinalFight2ArenaDistanceState : uint8 {
    Away,
    Close,
    MovingAway,
    MovingClose,
};

