#pragma once
#include "CoreMinimal.h"
#include "EWallOfDeathState.generated.h"

UENUM(BlueprintType)
enum class EWallOfDeathState : uint8 {
    Off,
    WaitingToStart,
    Moving,
    ReturnToLastCheckpoint,
    ReachedEnd,
};

