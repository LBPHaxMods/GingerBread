#pragma once
#include "CoreMinimal.h"
#include "ESniperRollStunState.generated.h"

UENUM(BlueprintType)
enum class ESniperRollStunState : uint8 {
    Invalid,
    Start,
    Loop,
    Recover,
    NumStates,
};

