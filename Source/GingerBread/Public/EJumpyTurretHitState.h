#pragma once
#include "CoreMinimal.h"
#include "EJumpyTurretHitState.generated.h"

UENUM(BlueprintType)
enum class EJumpyTurretHitState : uint8 {
    Invalid,
    WeakSpotLight,
    WeakSpotHeavy,
    NumStates,
};

