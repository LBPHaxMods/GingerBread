#pragma once
#include "CoreMinimal.h"
#include "EMinibossRammerCantAttack.generated.h"

UENUM(BlueprintType)
enum class EMinibossRammerCantAttack : uint8 {
    Invalid,
    TurnOnSpot,
    HopBack,
    NumStates,
};

