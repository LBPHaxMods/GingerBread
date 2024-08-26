#pragma once
#include "CoreMinimal.h"
#include "EMinibossRammerAdditiveAnimation.generated.h"

UENUM(BlueprintType)
enum class EMinibossRammerAdditiveAnimation : uint8 {
    Invalid,
    LeftChargeBarge,
    RightChargeBarge,
    FeatherBounce,
    NumStates,
};

