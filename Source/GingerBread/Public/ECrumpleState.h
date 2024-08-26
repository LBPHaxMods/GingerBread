#pragma once
#include "CoreMinimal.h"
#include "ECrumpleState.generated.h"

UENUM(BlueprintType)
enum class ECrumpleState : uint8 {
    Flat,
    Triggered,
    Closing,
    TryCapture,
    Captured,
    Missed,
    Bursting,
    Exploded,
};

