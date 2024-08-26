#pragma once
#include "CoreMinimal.h"
#include "EMinibossRammerFlippedState.generated.h"

UENUM(BlueprintType)
enum class EMinibossRammerFlippedState : uint8 {
    Invalid,
    Start,
    Loop,
    Damage,
    Recover,
    NumStates,
};

