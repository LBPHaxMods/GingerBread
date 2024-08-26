#pragma once
#include "CoreMinimal.h"
#include "EGroupRollHoleState.generated.h"

UENUM(BlueprintType)
enum class EGroupRollHoleState : uint8 {
    Idle,
    Yanking,
    Rolling,
};

