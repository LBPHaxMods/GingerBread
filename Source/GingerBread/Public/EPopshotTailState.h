#pragma once
#include "CoreMinimal.h"
#include "EPopshotTailState.generated.h"

UENUM(BlueprintType)
enum class EPopshotTailState : uint8 {
    Invalid,
    Disabled,
    SocketDriven,
    Grabbed,
    Returning,
    NumStates,
};

