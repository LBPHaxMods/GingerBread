#pragma once
#include "CoreMinimal.h"
#include "EVexFinalFightActiveState.generated.h"

UENUM(BlueprintType)
enum class EVexFinalFightActiveState : uint8 {
    FightNotStarted,
    FightActive,
    FightFinished,
};

