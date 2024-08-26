#pragma once
#include "CoreMinimal.h"
#include "EESportsCrateState.generated.h"

UENUM(BlueprintType)
enum class EESportsCrateState : uint8 {
    Intact,
    Damaged,
    Destroyed,
};

