#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimDyingState.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimDyingState : uint8 {
    StandardDeath,
    FlattenedDeath,
    OnFrontDeath,
    LifePoolDepletedDeath,
};

