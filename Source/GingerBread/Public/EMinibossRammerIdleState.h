#pragma once
#include "CoreMinimal.h"
#include "EMinibossRammerIdleState.generated.h"

UENUM(BlueprintType)
enum class EMinibossRammerIdleState : uint8 {
    Invalid,
    Idle,
    PatrolPaused,
    Walking,
    HopAndTurn,
    AlertToIdle,
    NumStates,
};

