#pragma once
#include "CoreMinimal.h"
#include "ETreasurePodState.generated.h"

UENUM(BlueprintType)
enum class ETreasurePodState : uint8 {
    Rotating,
    Triggered,
    Destroyed,
};

