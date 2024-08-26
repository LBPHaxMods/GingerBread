#pragma once
#include "CoreMinimal.h"
#include "ERammerThrowState.generated.h"

UENUM(BlueprintType)
enum class ERammerThrowState : uint8 {
    Invalid,
    InAir,
    Land,
    Recover,
    NumStates,
};

