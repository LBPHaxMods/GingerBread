#pragma once
#include "CoreMinimal.h"
#include "ERammerGenericState.generated.h"

UENUM(BlueprintType)
enum class ERammerGenericState : uint8 {
    Invalid,
    Idle,
    Charge,
    Carried,
    Thrown,
    HitState,
    Death,
    FlippedDeath,
    Flipped,
    CantAttack,
    Spawning,
    Bubble,
    Dropped,
    Sliding,
    Taunt,
    NumStates,
};

