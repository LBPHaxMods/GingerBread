#pragma once
#include "CoreMinimal.h"
#include "EMeanieGenericState.generated.h"

UENUM(BlueprintType)
enum class EMeanieGenericState : uint8 {
    Invalid,
    Idle,
    Taunt,
    Movement,
    Attack,
    TakeHit,
    Flipped,
    Death,
    Bubble,
    NumStates,
};

