#pragma once
#include "CoreMinimal.h"
#include "ESackboyHitReactionDirection.generated.h"

UENUM(BlueprintType)
enum class ESackboyHitReactionDirection : uint8 {
    HitFront,
    HitBack,
    HitLeft,
    HitRight,
    HitTop,
};

