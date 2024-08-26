#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimIntoWalkStandingTurnType.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimIntoWalkStandingTurnType : uint8 {
    Turn180Left,
    Turn180Right,
    Turn90Left,
    Turn90Right,
};

