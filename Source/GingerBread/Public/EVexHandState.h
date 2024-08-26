#pragma once
#include "CoreMinimal.h"
#include "EVexHandState.generated.h"

UENUM(BlueprintType)
enum class EVexHandState : uint8 {
    Invalid,
    Hidden,
    Idle,
    Fist,
    FistImpact,
    Slap,
    SlapClap,
    DropBox,
    DropBomb,
    Trickster,
};

