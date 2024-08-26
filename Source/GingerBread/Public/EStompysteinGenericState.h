#pragma once
#include "CoreMinimal.h"
#include "EStompysteinGenericState.generated.h"

UENUM(BlueprintType)
enum class EStompysteinGenericState : uint8 {
    Invalid,
    Idle,
    Movement,
    Spin,
    TakeHit,
    Vulnerable,
    Taunt,
    Death,
    NumStates,
};

