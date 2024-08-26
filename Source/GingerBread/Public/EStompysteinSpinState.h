#pragma once
#include "CoreMinimal.h"
#include "EStompysteinSpinState.generated.h"

UENUM(BlueprintType)
enum class EStompysteinSpinState : uint8 {
    Invalid,
    IntoFirstTime,
    IntoFromVulnerable,
    IntoFromTaunt,
    Loop,
    OutOf,
    NumStates,
};

