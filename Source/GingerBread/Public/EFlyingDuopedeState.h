#pragma once
#include "CoreMinimal.h"
#include "EFlyingDuopedeState.generated.h"

UENUM(BlueprintType)
enum class EFlyingDuopedeState : uint8 {
    Following,
    PickedUp,
    Thrown,
    ThrownLand,
    Squashed,
    Slapped,
    RolledInto,
    Blasted,
    Killed,
    Sleeping,
    Synchronising,
};

