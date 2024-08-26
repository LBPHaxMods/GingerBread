#pragma once
#include "CoreMinimal.h"
#include "ERammerChargeState.generated.h"

UENUM(BlueprintType)
enum class ERammerChargeState : uint8 {
    Invalid,
    Anticipation,
    Charging,
    ChargingInAir,
    Braking,
    BrakingInAir,
    BrakeLanding,
    Falling,
    Stop,
    NumStates,
};

