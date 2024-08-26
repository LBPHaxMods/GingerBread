#pragma once
#include "CoreMinimal.h"
#include "EBabyProogleAdditiveAnimation.generated.h"

UENUM(BlueprintType)
enum class EBabyProogleAdditiveAnimation : uint8 {
    Invalid,
    AdditiveHitReaction,
    SlapLeft,
    SlapRight,
    WeakSlapLeft,
    WeakSlapRight,
    FlippedHit,
    FlippedStomped,
    GrabHit,
    GrabJumpyPulse,
    FeatherBounce,
    NumStates,
};

