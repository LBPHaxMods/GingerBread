#pragma once
#include "CoreMinimal.h"
#include "EMinibossRammerChargeState.generated.h"

UENUM(BlueprintType)
enum class EMinibossRammerChargeState : uint8 {
    Invalid,
    Anticipation,
    Charging,
    Braking,
    Stop,
    NumStates,
};

