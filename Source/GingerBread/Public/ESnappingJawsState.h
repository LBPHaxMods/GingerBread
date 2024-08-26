#pragma once
#include "CoreMinimal.h"
#include "ESnappingJawsState.generated.h"

UENUM(BlueprintType)
enum class ESnappingJawsState : uint8 {
    Closed,
    Opening,
    Open,
    Closing,
    NumStates,
};

