#pragma once
#include "CoreMinimal.h"
#include "ETrialsState.generated.h"

UENUM(BlueprintType)
enum class ETrialsState : uint8 {
    Closed,
    Opening,
    Open,
    Closing,
};

