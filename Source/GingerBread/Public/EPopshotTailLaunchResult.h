#pragma once
#include "CoreMinimal.h"
#include "EPopshotTailLaunchResult.generated.h"

UENUM(BlueprintType)
enum class EPopshotTailLaunchResult : uint8 {
    Invalid,
    Stopped,
    HitWall,
    Fell,
};

