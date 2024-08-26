#pragma once
#include "CoreMinimal.h"
#include "EHitPointsTargetTag.generated.h"

UENUM(BlueprintType)
enum class EHitPointsTargetTag : uint8 {
    Sackboy,
    Enemy,
    Environment,
    Boss,
    KillFloor,
};

