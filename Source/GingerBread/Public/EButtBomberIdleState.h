#pragma once
#include "CoreMinimal.h"
#include "EButtBomberIdleState.generated.h"

UENUM(BlueprintType)
enum class EButtBomberIdleState : uint8 {
    Invalid,
    Idle,
    Flying,
    LookingAround,
    AlertToIdle,
    NumStates,
};

