#pragma once
#include "CoreMinimal.h"
#include "EPongerState.generated.h"

UENUM(BlueprintType)
enum class EPongerState : uint8 {
    Idle,
    PickedUp,
    TraversalStart,
    TraversalStop,
    Moving,
    DoManouveourOne,
    DoManouveourTwo,
    Thrown,
    HitReact,
    JumpedOn,
    Slapped,
    Die,
};

