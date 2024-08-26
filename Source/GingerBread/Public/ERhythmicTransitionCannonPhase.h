#pragma once
#include "CoreMinimal.h"
#include "ERhythmicTransitionCannonPhase.generated.h"

UENUM(BlueprintType)
enum class ERhythmicTransitionCannonPhase : uint8 {
    Invalid,
    Idle,
    InviteIn,
    WaitingForPlayers,
    Gulp,
    WaitingToFire,
    Firing,
    NumStates,
};

