#pragma once
#include "CoreMinimal.h"
#include "ERammerTurnToTargetType.generated.h"

UENUM(BlueprintType)
enum class ERammerTurnToTargetType : uint8 {
    Invalid,
    CantAttack,
    AlertTargetTurn,
    Charge,
};

