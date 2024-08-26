#pragma once
#include "CoreMinimal.h"
#include "EDuopedeState.generated.h"

UENUM(BlueprintType)
enum class EDuopedeState : uint8 {
    Following,
    PickedUp,
    Thrown,
    InBubble,
    Squashed,
    Slapped,
    RolledInto,
    Blasted,
    Killed,
    Sleeping,
    Synchronising,
};

