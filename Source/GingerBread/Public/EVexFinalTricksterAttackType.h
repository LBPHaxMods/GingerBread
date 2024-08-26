#pragma once
#include "CoreMinimal.h"
#include "EVexFinalTricksterAttackType.generated.h"

UENUM(BlueprintType)
enum class EVexFinalTricksterAttackType : uint8 {
    Crumpler,
    LifeSteal,
    SackboySwap,
    SackboyTransform,
    Random,
};

