#pragma once
#include "CoreMinimal.h"
#include "EBlasterState.generated.h"

UENUM(BlueprintType)
enum class EBlasterState : uint8 {
    Idle,
    Charging,
    FullyCharged,
    Thrown,
    Explosion,
    Destroyed,
};

