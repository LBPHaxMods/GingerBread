#pragma once
#include "CoreMinimal.h"
#include "ERhythmicDuopedeState.generated.h"

UENUM(BlueprintType)
enum class ERhythmicDuopedeState : uint8 {
    Following,
    LeaningOnce,
    LeaningTwice,
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

