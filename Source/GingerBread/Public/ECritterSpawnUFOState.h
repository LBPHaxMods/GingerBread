#pragma once
#include "CoreMinimal.h"
#include "ECritterSpawnUFOState.generated.h"

UENUM(BlueprintType)
enum class ECritterSpawnUFOState : uint8 {
    NONE,
    IDLE,
    OPEN,
    CLOSE,
};

