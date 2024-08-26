#pragma once
#include "CoreMinimal.h"
#include "EPopshotTailLaunchState.generated.h"

UENUM(BlueprintType)
enum class EPopshotTailLaunchState : uint8 {
    Invalid,
    Launching,
    Recover_Stopped,
    Recover_HitWall,
    Recover_Fell,
    NumStates,
};

