#pragma once
#include "CoreMinimal.h"
#include "EJumpyTurretSprayAttackState.generated.h"

UENUM(BlueprintType)
enum class EJumpyTurretSprayAttackState : uint8 {
    Invalid,
    Anticipation,
    Launch,
    Recovery,
    NumStates,
};

