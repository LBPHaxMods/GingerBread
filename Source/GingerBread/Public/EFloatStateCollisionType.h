#pragma once
#include "CoreMinimal.h"
#include "EFloatStateCollisionType.generated.h"

UENUM(BlueprintType)
enum class EFloatStateCollisionType : uint8 {
    NoCollision,
    OverlapOnly,
    HitOnly,
    Both,
};

