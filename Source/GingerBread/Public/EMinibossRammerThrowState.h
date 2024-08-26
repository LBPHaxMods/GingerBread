#pragma once
#include "CoreMinimal.h"
#include "EMinibossRammerThrowState.generated.h"

UENUM(BlueprintType)
enum class EMinibossRammerThrowState : uint8 {
    Invalid,
    InAir,
    Land,
    Recover,
    NumStates,
};

