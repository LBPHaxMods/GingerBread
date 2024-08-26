#pragma once
#include "CoreMinimal.h"
#include "ERammerCantAttack.generated.h"

UENUM(BlueprintType)
enum class ERammerCantAttack : uint8 {
    Invalid,
    TurnOnSpot,
    HopBack,
    NumStates,
};

