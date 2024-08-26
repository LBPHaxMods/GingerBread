#pragma once
#include "CoreMinimal.h"
#include "ERammerAdditiveAnimation.generated.h"

UENUM(BlueprintType)
enum class ERammerAdditiveAnimation : uint8 {
    Invalid,
    LeftChargeBarge,
    RightChargeBarge,
    FeatherBounce,
    TakeHit,
    FlippedRolledInto,
    NumStates,
};

