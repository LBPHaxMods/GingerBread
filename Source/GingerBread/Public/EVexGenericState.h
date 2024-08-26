#pragma once
#include "CoreMinimal.h"
#include "EVexGenericState.generated.h"

UENUM(BlueprintType)
enum class EVexGenericState : uint8 {
    Invalid,
    Idle,
    Attack,
    Driving,
    Jump,
    Hit,
    Death,
    NumStates,
};

