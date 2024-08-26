#pragma once
#include "CoreMinimal.h"
#include "ESniperThrownState.generated.h"

UENUM(BlueprintType)
enum class ESniperThrownState : uint8 {
    Invalid,
    InAir,
    Land,
    Recover,
    NumStates,
};

