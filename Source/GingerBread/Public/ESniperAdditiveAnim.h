#pragma once
#include "CoreMinimal.h"
#include "ESniperAdditiveAnim.generated.h"

UENUM(BlueprintType)
enum class ESniperAdditiveAnim : uint8 {
    Invalid,
    LeftTurn,
    RightTurn,
    NumStates,
};

