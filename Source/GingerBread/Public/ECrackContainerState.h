#pragma once
#include "CoreMinimal.h"
#include "ECrackContainerState.generated.h"

UENUM(BlueprintType)
enum class ECrackContainerState : uint8 {
    Idle,
    Occupied,
    Complete,
};

