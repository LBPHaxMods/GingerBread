#pragma once
#include "CoreMinimal.h"
#include "EPatrollingCrabDirection.generated.h"

UENUM(BlueprintType)
enum class EPatrollingCrabDirection : uint8 {
    Left,
    Right,
    Idle,
};

