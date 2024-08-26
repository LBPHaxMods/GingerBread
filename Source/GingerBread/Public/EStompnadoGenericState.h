#pragma once
#include "CoreMinimal.h"
#include "EStompnadoGenericState.generated.h"

UENUM(BlueprintType)
enum class EStompnadoGenericState : uint8 {
    Invalid,
    Idle,
    Movement,
    Spin,
    TakeHit,
    Vulnerable,
    Carried,
    Thrown,
    Death,
    NumStates,
};

