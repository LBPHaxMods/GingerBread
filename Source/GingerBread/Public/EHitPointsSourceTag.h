#pragma once
#include "CoreMinimal.h"
#include "EHitPointsSourceTag.generated.h"

UENUM(BlueprintType)
enum class EHitPointsSourceTag : uint8 {
    Sackboy,
    Enemy,
    Environment,
    Boss,
    KillFloor,
};

