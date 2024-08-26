#pragma once
#include "CoreMinimal.h"
#include "ESackboyAdditiveAnimState.generated.h"

UENUM(BlueprintType)
enum class ESackboyAdditiveAnimState : uint8 {
    NoAnim,
    GrabbedStruggle,
    NormalLanding,
    RollJumpLanding,
    SackboyBouncedOnMe,
    ActingArms,
    Headshake,
    HitReaction,
    CarryingHeavyObject,
    NumStates,
};

