#pragma once
#include "CoreMinimal.h"
#include "EJumpyTurretAdditiveState.generated.h"

UENUM(BlueprintType)
enum class EJumpyTurretAdditiveState : uint8 {
    Invalid,
    SmallHit,
    MediumHit,
    NumStates,
};

