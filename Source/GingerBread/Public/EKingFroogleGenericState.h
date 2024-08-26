#pragma once
#include "CoreMinimal.h"
#include "EKingFroogleGenericState.generated.h"

UENUM(BlueprintType)
enum class EKingFroogleGenericState : uint8 {
    Invalid,
    Idle,
    TurnOnSpot,
    PhaseTransition,
    Death,
    Hop,
    CantAttack,
    Stomp,
    SuperAttack,
    NumStates,
};

