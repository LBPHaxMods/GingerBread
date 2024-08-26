#pragma once
#include "CoreMinimal.h"
#include "EVexAttackState.generated.h"

UENUM(BlueprintType)
enum class EVexAttackState : uint8 {
    Invalid,
    SingleBomb,
    Vortex,
    Hand,
    SingleRoller,
    MultiRoller,
    FlameSequence,
    ConveyorHeights,
    NumStates,
};

