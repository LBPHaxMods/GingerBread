#pragma once
#include "CoreMinimal.h"
#include "EMinibossRammerGenericState.generated.h"

UENUM(BlueprintType)
enum class EMinibossRammerGenericState : uint8 {
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
    NumStates,
};

