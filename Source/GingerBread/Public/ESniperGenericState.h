#pragma once
#include "CoreMinimal.h"
#include "ESniperGenericState.generated.h"

UENUM(BlueprintType)
enum class ESniperGenericState : uint8 {
    Invalid,
    Idle,
    Throw,
    Reload,
    TakeHit,
    Carried,
    Cower,
    Approach,
    Escape,
    Exhausted,
    Thrown,
    TurnOnSpot,
    RollStunned,
    Death,
    FlightTakeoff,
    FlightDescent,
    Bubble,
    Dropped,
    Sliding,
    Celebrate,
    Taunt,
    NumStates,
};

