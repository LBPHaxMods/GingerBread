#pragma once
#include "CoreMinimal.h"
#include "ERhythmicTransitionCannonAnimState.generated.h"

UENUM(BlueprintType)
enum class ERhythmicTransitionCannonAnimState : uint8 {
    NoAnim,
    Idle,
    InviteIn,
    WaitingForPlayers,
    Gulp,
    WaitingToFire,
    Firing,
    NumStates,
};

