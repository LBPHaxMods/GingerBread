#pragma once
#include "CoreMinimal.h"
#include "ECritterCarryState.generated.h"

UENUM(BlueprintType)
enum class ECritterCarryState : uint8 {
    Idle,
    Carried,
    Thrown,
    TurningRight,
    TurningLeft,
};

