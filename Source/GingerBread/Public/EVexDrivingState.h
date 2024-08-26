#pragma once
#include "CoreMinimal.h"
#include "EVexDrivingState.generated.h"

UENUM(BlueprintType)
enum class EVexDrivingState : uint8 {
    Invalid,
    Start,
    Loop,
    Finish,
    ReverseConveyors,
    NumStates,
};

