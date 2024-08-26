#pragma once
#include "CoreMinimal.h"
#include "EJumpyTurretJumpState.generated.h"

UENUM(BlueprintType)
enum class EJumpyTurretJumpState : uint8 {
    Invalid,
    Anticipation,
    InAir,
    Land,
    NumStates,
};

