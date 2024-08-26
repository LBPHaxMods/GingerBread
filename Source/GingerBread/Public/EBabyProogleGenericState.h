#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleGenericState.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleGenericState : uint8 {
    Invalid,
    Standing,
    Hopping,
    Hit,
    Celebrating,
    Notice,
    Dead,
    FlippedDeath,
    BeingCarried,
    BeingGrabbed,
    Thrown,
    Dizzy,
    SuperAttack,
    Exhausted,
    Flipped,
    Spawning,
    Bubble,
    Dropped,
    Sliding,
    Taunt,
    NumStates,
};

