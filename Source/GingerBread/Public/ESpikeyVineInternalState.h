#pragma once
#include "CoreMinimal.h"
#include "ESpikeyVineInternalState.generated.h"

UENUM(BlueprintType)
enum class ESpikeyVineInternalState : uint8 {
    Grown,
    CuttingDown,
    CutDown,
    Signposting,
    Regrowing,
};

