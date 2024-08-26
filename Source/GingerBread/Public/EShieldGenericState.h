#pragma once
#include "CoreMinimal.h"
#include "EShieldGenericState.generated.h"

UENUM(BlueprintType)
enum class EShieldGenericState : uint8 {
    Invalid,
    Idle,
    Movement,
    TakeHit,
    Death,
    Bubble,
    Dropped,
    NumStates,
};

