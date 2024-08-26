#pragma once
#include "CoreMinimal.h"
#include "EDarkMatterEngineMovementSpace.generated.h"

UENUM(BlueprintType)
enum class EDarkMatterEngineMovementSpace : uint8 {
    Universe,
    Vehicle,
    Max,
    Invalid,
};

