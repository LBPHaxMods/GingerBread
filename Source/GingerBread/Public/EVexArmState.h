#pragma once
#include "CoreMinimal.h"
#include "EVexArmState.generated.h"

UENUM(BlueprintType)
enum class EVexArmState : uint8 {
    Invalid,
    Left,
    Right,
    NumStates,
};

