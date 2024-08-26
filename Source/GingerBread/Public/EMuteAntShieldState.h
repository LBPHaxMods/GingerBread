#pragma once
#include "CoreMinimal.h"
#include "EMuteAntShieldState.generated.h"

UENUM(BlueprintType)
enum class EMuteAntShieldState : uint8 {
    Invalid,
    Raised,
    Lowered,
    NumStates,
};

