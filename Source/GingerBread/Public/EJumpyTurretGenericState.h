#pragma once
#include "CoreMinimal.h"
#include "EJumpyTurretGenericState.generated.h"

UENUM(BlueprintType)
enum class EJumpyTurretGenericState : uint8 {
    Invalid,
    Idle,
    SprayAttack,
    MortarAttack,
    Jump,
    Hit,
    LegAttack,
    Celebration,
    Death,
    NumStates,
};

