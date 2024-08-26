#pragma once
#include "CoreMinimal.h"
#include "ERammerFlippedState.generated.h"

UENUM(BlueprintType)
enum class ERammerFlippedState : uint8 {
    Invalid,
    Start,
    Recover,
    NumStates,
};

