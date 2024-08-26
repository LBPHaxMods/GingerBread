#pragma once
#include "CoreMinimal.h"
#include "EGruntyFlippedState.generated.h"

UENUM(BlueprintType)
enum class EGruntyFlippedState : uint8 {
    Invalid,
    Start,
    Recover,
    NumStates,
};

