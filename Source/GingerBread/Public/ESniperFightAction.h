#pragma once
#include "CoreMinimal.h"
#include "ESniperFightAction.generated.h"

UENUM(BlueprintType)
enum class ESniperFightAction : uint8 {
    Invalid,
    RunAway,
    Cower,
    Approach,
    Attack,
    FightIdle,
    Celebrate,
    NumStates,
};

