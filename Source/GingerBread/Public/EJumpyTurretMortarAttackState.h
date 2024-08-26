#pragma once
#include "CoreMinimal.h"
#include "EJumpyTurretMortarAttackState.generated.h"

UENUM(BlueprintType)
enum class EJumpyTurretMortarAttackState : uint8 {
    Invalid,
    Anticipation,
    Launch,
    Recovery,
    NumStates,
};

