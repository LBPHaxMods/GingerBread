#pragma once
#include "CoreMinimal.h"
#include "ESpaceHamsterGenericState.generated.h"

UENUM(BlueprintType)
enum class ESpaceHamsterGenericState : uint8 {
    Invalid,
    Idle,
    Moving,
    SkidStop,
    StaticWindup,
    Death,
    NumStates,
};

