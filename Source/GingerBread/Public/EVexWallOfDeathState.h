#pragma once
#include "CoreMinimal.h"
#include "EVexWallOfDeathState.generated.h"

UENUM(BlueprintType)
enum class EVexWallOfDeathState : uint8 {
    Off,
    Ready,
    On,
};

