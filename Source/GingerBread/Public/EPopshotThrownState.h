#pragma once
#include "CoreMinimal.h"
#include "EPopshotThrownState.generated.h"

UENUM(BlueprintType)
enum class EPopshotThrownState : uint8 {
    Invalid,
    InAir,
    Land,
    Recover,
    NumStates,
};

