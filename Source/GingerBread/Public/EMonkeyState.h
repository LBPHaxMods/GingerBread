#pragma once
#include "CoreMinimal.h"
#include "EMonkeyState.generated.h"

UENUM(BlueprintType)
enum class EMonkeyState : uint8 {
    Idle,
    PickedUp,
    Thrown,
    Rolling,
    SelfRighting,
    Dropped,
    Respawning,
    Jumping,
    Homing,
    Hit,
    NumStates,
};

