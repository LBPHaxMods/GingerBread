#pragma once
#include "CoreMinimal.h"
#include "EPopshotGenericState.generated.h"

UENUM(BlueprintType)
enum class EPopshotGenericState : uint8 {
    Invalid,
    Idle,
    Movement,
    TakeHit,
    Flipped,
    Cower,
    Carry,
    Thrown,
    Shoot,
    TailLaunch,
    Recoil,
    Death,
    Bubble,
    Dropped,
    Sliding,
    Celebrate,
    Taunt,
    NumStates,
};

