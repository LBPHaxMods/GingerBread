#pragma once
#include "CoreMinimal.h"
#include "EButtBomber2IdleState.generated.h"

UENUM(BlueprintType)
enum class EButtBomber2IdleState : uint8 {
    Invalid,
    Idle,
    Flying,
    LookingAround,
    AlertToIdle,
    NumStates,
};

