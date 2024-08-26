#pragma once
#include "CoreMinimal.h"
#include "ETriggerSequencerState.generated.h"

UENUM(BlueprintType)
enum class ETriggerSequencerState : uint8 {
    Sequence,
    Delay,
    Complete,
};

