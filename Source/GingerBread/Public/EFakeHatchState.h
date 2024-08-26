#pragma once
#include "CoreMinimal.h"
#include "EFakeHatchState.generated.h"

UENUM(BlueprintType)
enum class EFakeHatchState : uint8 {
    Invalid,
    Opening,
    Open,
    Closing,
    Closed,
    NumStates,
};

