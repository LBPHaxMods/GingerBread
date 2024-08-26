#pragma once
#include "CoreMinimal.h"
#include "EAIDroppedState.generated.h"

UENUM(BlueprintType)
enum class EAIDroppedState : uint8 {
    Invalid,
    Falling,
    Landing,
    NumStates,
};

