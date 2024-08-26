#pragma once
#include "CoreMinimal.h"
#include "ETransitionCannonPhase.generated.h"

UENUM(BlueprintType)
enum class ETransitionCannonPhase : uint8 {
    Invalid,
    Idle,
    InviteIn,
    WaitingForPlayers,
    Gulp,
    ReadyToFire,
    Firing,
    NumStates,
};

