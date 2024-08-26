#pragma once
#include "CoreMinimal.h"
#include "EMuteAntChargeState.generated.h"

UENUM(BlueprintType)
enum class EMuteAntChargeState : uint8 {
    Invalid,
    PreCharge,
    Charging,
    Missed,
    Teetering,
    NumStates,
};

