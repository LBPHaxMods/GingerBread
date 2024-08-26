#pragma once
#include "CoreMinimal.h"
#include "EGruntyGenericState.generated.h"

UENUM(BlueprintType)
enum class EGruntyGenericState : uint8 {
    Invalid,
    Idle,
    TurnOnSpot,
    Confused,
    Attack,
    Carried,
    Thrown,
    Flipped,
    Movement,
    Stack,
    Timber,
    StackLaunchAttack,
    TakeHit,
    Death,
    Bubble,
    Dropped,
    ShieldBash,
    Celebrate,
    Taunt,
    Sliding,
    NumStates,
};

