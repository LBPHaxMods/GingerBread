#pragma once
#include "CoreMinimal.h"
#include "EStompnadoSpinState.generated.h"

UENUM(BlueprintType)
enum class EStompnadoSpinState : uint8 {
    Invalid,
    Into,
    Loop,
    OutOf,
    NumStates,
};

