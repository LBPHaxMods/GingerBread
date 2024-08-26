#pragma once
#include "CoreMinimal.h"
#include "EMovementMode_Custom.generated.h"

UENUM(BlueprintType)
enum class EMovementMode_Custom : uint8 {
    None,
    Jumping,
    MAX,
};

