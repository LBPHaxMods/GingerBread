#pragma once
#include "CoreMinimal.h"
#include "EWaterTableState.generated.h"

UENUM(BlueprintType)
enum class EWaterTableState : uint8 {
    AtMin,
    AtMax,
    Changing,
    None,
};

