#pragma once
#include "CoreMinimal.h"
#include "ETransitionCannonAnimState.generated.h"

UENUM(BlueprintType)
enum class ETransitionCannonAnimState : uint8 {
    NoAnim,
    Idle,
    InviteIn,
    WaitingForPlayers,
    Gulp,
    Firing,
    NumStates,
};

