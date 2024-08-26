#pragma once
#include "CoreMinimal.h"
#include "ESackboyHitReactionFacing.generated.h"

UENUM(BlueprintType)
enum class ESackboyHitReactionFacing : uint8 {
    UseOldSystem,
    LeaveFacing,
    FaceImpact,
    FrontAndBack,
};

