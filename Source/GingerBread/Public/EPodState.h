#pragma once
#include "CoreMinimal.h"
#include "EPodState.generated.h"

UENUM(BlueprintType)
enum class EPodState : uint8 {
    Closed,
    Opening,
    Open,
    Closing,
};

