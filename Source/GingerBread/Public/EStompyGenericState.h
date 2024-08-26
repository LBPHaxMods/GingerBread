#pragma once
#include "CoreMinimal.h"
#include "EStompyGenericState.generated.h"

UENUM(BlueprintType)
enum class EStompyGenericState : uint8 {
    Invalid,
    Idle,
    Movement,
    Stomp,
    TakeHit,
    Flipped,
    Carried,
    Thrown,
    Death,
    Bubble,
    Dropped,
    Sliding,
    Celebrate,
    Taunt,
    NumStates,
};

