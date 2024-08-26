#pragma once
#include "CoreMinimal.h"
#include "ECrateState.generated.h"

UENUM(BlueprintType)
enum class ECrateState : uint8 {
    Intact,
    Damaged,
    Destroyed,
};

